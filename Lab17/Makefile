
FLAGS = --std=c++14 -Wall --pedantic-errors

TOOL = ./translate

OBJ = ./objects

$(OBJ)/asm : $(OBJ)/toolkit.o $(OBJ)/assembler.o $(OBJ)/disassembler.o
	g++ $(FLAGS) $(OBJ)/toolkit.o $(OBJ)/assembler.o $(OBJ)/disassembler.o -o $(OBJ)/asm

$(OBJ)/toolkit.o : $(TOOL)/toolkit.cpp $(TOOL)/assembler.h $(TOOL)/disassembler.h
	g++ -c $(FLAGS) $(TOOL)/toolkit.cpp -o $(OBJ)/toolkit.o

$(OBJ)/disassembler.o : $(TOOL)/disassembler.cpp $(TOOL)/disassembler.h
	g++ -c $(FLAGS) $(TOOL)/disassembler.cpp -o $(OBJ)/disassembler.o

$(OBJ)/assembler.o : $(TOOL)/assembler.cpp $(TOOL)/assembler.h
	g++ -c $(FLAGS) $(TOOL)/assembler.cpp -o $(OBJ)/assembler.o
