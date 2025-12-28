#include "verilated.h"
#include "Valu.h"

#include <iostream>
#include <cctype>

using namespace std;

struct Bin16 {
	
	int digits[16];
	int carry;
	
	Bin16() {
		for (int i = 0; i < 16; i++) {
			digits[i] = 0;
		}
		carry = 0;
	}

	Bin16(int32_t nbr, int32_t init_carry) {
		for (int i = 0; i < 16; i++) {
			digits[i] = ((nbr >> i) & 1);
		}
		carry = init_carry;
	}

	bool operator == (Bin16 o) {
		for (int i = 0; i < 16; i++) {
			if (digits[i] != o.digits[i]) {
				return false;
			}
		}
		return true;
	}

	void operator = (Bin16 o) {
		for (int i = 0; i < 16; i++) {
			digits[i] = o.digits[i];
		}
		carry = o.carry;
	}

	void operator |= (Bin16 o) {
		for (int i = 0; i < 16; i++) {
			digits[i] |= o.digits[i];
		}
		carry |= o.carry;
	}

	void operator &= (Bin16 o) {
		for (int i = 0; i < 16; i++) {
			digits[i] &= o.digits[i];
		}
		carry &= o.carry;
	}

	void operator ^= (Bin16 o) {
		for (int i = 0; i < 16; i++) {
			digits[i] ^= o.digits[i];
		}
		carry ^= o.carry;
	}

	void Inverse() {
		for (int i = 0; i < 16; i++) {
			digits[i] = 1 - digits[i];
		}
		carry = 1 - carry;
	}

	void operator += (Bin16 o) {
		for (int i = 0; i < 16; i++) {
			digits[i] += o.digits[i];
		}
		for (int i = 0; i < 15; i++) {
			digits[i + 1] += (digits[i] / 2);
			digits[i] %= 2;
		}
		carry += (digits[15] / 2);
		digits[15] %= 2;
		carry += o.carry;
		carry %= 2;
	}

	void operator -= (Bin16 o) {
		Bin16 buf = Bin16();
		for (int i = 0; i < 16; i++) {
			buf.digits[i] = digits[i];
		}
		buf.carry = carry;
		o.Inverse();
		buf += o;
		buf += Bin16(static_cast<int16_t>(1), 0);
		for (int i = 0; i < 16; i++) {
			digits[i] = buf.digits[i];
		}	
		carry = buf.carry;
	}
	
};

const int my_seed = 103;

int Random() {
	return (rand() ^ (rand() << 16));
}

void generate_short(int *nbr) {
	int tmp = abs(Random()) % 32178;
	*nbr = tmp;
}

bool check_try(int a, int b, int c_in, int sel, int md, int c_out, int cmp, int res, int bad_count);

int main(int argc, char **argv) {
	
	Verilated :: commandArgs(argc, argv);

	Valu *my_alu = new Valu;
	
	srand(my_seed);
	int nbr_a, nbr_b, c_in;
	int c_out, cmp_res, alu_res;
	int ok_cnt = 0, err_cnt = 0;

	for (int mode_signal = 0; mode_signal <= 1; mode_signal++) {
		for (int select_signal = 0; select_signal <= 15; select_signal++) {
			cout << "\n\n ===== START TESTS FOR M = " << mode_signal << " AND SEL = " << select_signal << " ===== \n\n";
			err_cnt = 0;
			int current_count = 0;
			for (int eval_repeats = 1; eval_repeats <= 1000; eval_repeats++) {
				generate_short(&nbr_a);
				generate_short(&nbr_b);
				c_in = abs(Random()) % 2;
				my_alu -> carry_in = c_in;
				my_alu -> in_a     = static_cast<int16_t>(nbr_a);
				my_alu -> in_b     = static_cast<int16_t>(nbr_b);
				my_alu -> select   = select_signal;
				my_alu -> mode     = mode_signal;
				my_alu -> eval();
				c_out    = my_alu -> carry_out;
				cmp_res  = my_alu -> compare;
			       	alu_res  = my_alu -> alu_out;	
				if (check_try(nbr_a, nbr_b, c_in, select_signal, mode_signal, c_out, cmp_res, alu_res, err_cnt)) {
					ok_cnt++;			
				} else {	
					current_count++;	
					if (err_cnt < 5) { 
						cout << "Error occured\n";
						cout << "a = " << nbr_a << "; b =  " << nbr_b << "\n";
			    			cout << "mode = " << mode_signal << "; select =  " << select_signal << ";\n";
			    			cout << "carry_in = " << c_in << "\n";
						cout << " ---------------------------------------- \n\n";
						err_cnt++;
					}
				}
			}
			cout << " ===== IN THE CURRENT CATEGORY, SUCCESS RATE = " << 1000 - current_count << " out of 1000 =====\n\n";
		}
	}

	cout << "Correct " << ok_cnt << " out of 32000" << "\n";

	return 0;
}

bool take_logic(short a, short b, short sel, short res) {
	bool ok = false;
	switch (sel) {
		case 0: {
			ok = (  (~a) == res );	
			break;	
		}
		case 1: {
			ok = ( (~(a | b)) == res );
			break;
		}
		case 2: {
			ok = ( ((~a) & b) == res );
			break;
		}
		case 3: {
			ok = ( 0 == res );
			break;
		}
		case 4: {
			ok = ( (~(a & b)) == res );
			break;
		}
		case 5: {
			ok = ( (~b) == res );
			break;
		}
		case 6: {
			ok = ( (a ^ b) == res);
			break;
		}
		case 7: {
			ok = ((a & (~b)) == res);
			break;
		}
		case 8: {
			ok = ( ((~a) | b)  == res );	
			break;	
		}
		case 9: {
			ok = ( (~(a ^ b)) == res );
			break;
		}
		case 10: {
			ok = ( b  == res );
			break;
		}
		case 11: {
			ok = ( (a & b) == res );
			break;
		}
		case 12: {
			ok = ( (short)((1 << 16) - 1) == res );
			break;
		}
		case 13: {
			ok = ( (a | (~b)) == res );
			break;
		}
		case 14: {
			ok = ( (a | b) == res);
			break;
		}
		case 15: {
			ok = (a == res);
			break;
		}
	}
	return ok;
}

bool check_try(int a1, int b1, int c_in1, int sel, int md, int c_out, int cmp, int res, int bad_count) {
	short a = static_cast<int16_t>(a1);
	short b = static_cast<int16_t>(b1);
	if (md == 1) {
		return take_logic((short)(a), (short)(b), (short)(sel), (short)(res));
	}
	bool ok = false;
	short c_in = (short)(c_in1);
	switch (sel) {
		case 0: {
			short res_c = (short)((a1 + c_in1) >> 16);	
			ok = ( a + c_in == res && res_c == c_out);
			if (!ok && bad_count <= 4) {
				cout << "Needed: " << a + c_in << "; and carry = " << res_c << "\n";
			}	
			break;	
		}
		case 1: {
			short res_c = (short)(((a1 | b1) + c_in1) >> 16);
			ok = ( ((a | b) + c_in) == res && res_c == c_out);
			if (!ok && bad_count <= 4) {
				cout << "Needed: " << ((a | b) + c_in) << "; and carry = " << res_c << "\n";
			}
			break;
		}
		case 2: {
			Bin16 nbr1 = Bin16(a1, 0);
			Bin16 nbr2 = Bin16(b1, 0);
			nbr2.Inverse();
			nbr1 |= nbr2;
			nbr1 += Bin16(c_in1, 0);
			bool ok1 = (nbr1 == Bin16(res, c_out));
			if (!ok1 && bad_count <= 4) {
				cout << "Needed: ";
				for (int i = 15; i >= 0; i--) {
					cout << nbr1.digits[i];
				}
				cout << "; and carry = " << nbr1.carry << "\n";
			}
			return ok1;
			break;
		}
		case 3: {
			Bin16 m = Bin16(-1, 0);
			m += Bin16(c_in1, 0);
			bool ok1 = (m == Bin16(res, c_out));
			return ok1;
			break;
		}
		case 4: {
			int cr = ((int)((a | (a & (~b)))) + c_in1) >> 16;
			ok = ( ((a | (a & (~b)))) + c_in == res && (cr & 1) == c_out);
			break;
		}
		case 5: {
			Bin16 nX1 = Bin16(a, 0);
			Bin16 nY1 = Bin16(b, 0);
			nX1 |= nY1;
			Bin16 nX2 = Bin16(a, 0);
			Bin16 nY2 = Bin16(b, 0);
			nY2.Inverse();
			nX2 &= nY2;
			nX1 += nX2;
			nX1 += Bin16(c_in, 0);
			ok = ( nX1 == Bin16(res, c_out) );
			break;
		}
		case 6: {
			ok = ( (int16_t)(res) == (a - b - 1 + c_in) );
			break;
		}
		case 7: {
			ok = ((a & (~b)) - 1 + c_in == (int16_t)(res));
			if (!ok) {
				cout << (a & (~b)) - 1 + c_in << "\n";
				cout << res << " is needed\n";
			}
			break;
		}
		case 8: {
			ok = ( a + (a & b) + c_in == res );	
			break;	
		}
		case 9: {
			ok = ( a + b + c_in == res );
			break;
		}
		case 10: {
			ok = ( ( (a | (~b)) + (a & b) + c_in )  == (int16_t)(res) );
			break;
		}
		case 11: {
			ok = ( (a & b) - 1 + c_in == (int16_t)(res));
			break;
		}
		case 12: {
			ok = ( a + a + c_in == res );
			break;
		}
		case 13: {
			ok = ( (a | b) + a + c_in == res );
			break;
		}
		case 14: {
			ok = ( (a | (~b)) + a + c_in == (int16_t)(res) );
			return ok;
			break;
		}
		case 15: {
			ok = (a - 1 + c_in == (int16_t)(res));
			break;
		}
	}
	return ok;
}

