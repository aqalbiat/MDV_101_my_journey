FLAGS = --std=c++14 -Wall --pedantic-errors

EXEC = .

OBJ = ./output

$(OBJ)/sim : $(OBJ)/runner.o $(OBJ)/bitty_emu.o
	g++ $(FLAGS) $(OBJ)/runner.o $(OBJ)/bitty_emu.o -o $(OBJ)/sim

$(OBJ)/runner.o : $(EXEC)/runner.cpp $(EXEC)/bitty_emu.h
	g++ -c $(FLAGS) $(EXEC)/runner.cpp -o $(OBJ)/runner.o

$(OBJ)/bitty_emu.o : $(EXEC)/bitty_emu.cpp $(EXEC)/bitty_emu.h
	g++ -c $(FLAGS) $(EXEC)/bitty_emu.cpp -o $(OBJ)/bitty_emu.o