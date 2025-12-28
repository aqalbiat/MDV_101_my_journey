
./main : ./main.o ./bitty_emu.o
	g++ -Wall -pedantic-errors --std=c++14 -o ./main ./main.o ./bitty_emu.o

./main.o : ./main.cpp ./bitty_emu.h
	g++ -c -Wall -pedantic-errors --std=c++14 ./main.cpp -o ./main.o

./bitty_emu.o : ./bitty_emu.cpp ./bitty_emu.h
	g++ -c -Wall -pedantic-errors --std=c++14 ./bitty_emu.cpp -o ./bitty_emu.o 

