HOME=.
SRC=$(HOME)/src
INCLUDE=$(HOME)/include
LIB=$(HOME)/lib
OBJ=$(HOME)/obj
BIN=$(HOME)/bin

all : Directories $(BIN)/Convert_Dec

Delete : mr.proper delete_directories

#Library(ies)

$(OBJ)/Convert_Declib.o : $(SRC)/Convert_Declib.cpp
	@echo [+] Creating Convert_Declib.o
	@g++ -c -o $(OBJ)/Convert_Declib.o $(SRC)/Convert_Declib.cpp -std=c++14 -I$(INCLUDE)

$(LIB)/libConvert_Declib.a : $(OBJ)/Convert_Declib.o
	@echo [+] Creating library 
	@ar -rvs $(LIB)/libConvert_Declib.a $(OBJ)/Convert_Declib.o

$(OBJ)/GeneradorAleatorioEnteros.o : $(SRC)/GeneradorAleatorioEnteros.cpp
	@echo Creando objeto GeneradorAleatorioEnteros.o
	@g++ -std=c++14 -Wall -Wextra -Werror -c -o $(OBJ)/GeneradorAleatorioEnteros.o $(SRC)/GeneradorAleatorioEnteros.cpp -I$(INCLUDE)
        
$(LIB)/libGeneradorAleatorioEnteros.a : $(OBJ)/GeneradorAleatorioEnteros.o
	@echo Creando libGeneradorAleatorioEnteros.a
	@ar -rvs $(LIB)/libGeneradorAleatorioEnteros.a $(OBJ)/GeneradorAleatorioEnteros.o

#Executable

$(OBJ)/Convert_Dec.o : $(SRC)/Convert_Dec.cpp
	@echo [+] Creating Convert_Dec.o
	@g++ -c -o $(OBJ)/Convert_Dec.o $(SRC)/Convert_Dec.cpp -I$(INCLUDE) -std=c++14

$(BIN)/Convert_Dec : $(OBJ)/Convert_Dec.o $(LIB)/libConvert_Declib.a $(LIB)/libGeneradorAleatorioEnteros.a
	@echo [+] Creating Convert_Dec executable
	@g++ -o $(BIN)/Convert_Dec $(OBJ)/Convert_Dec.o -L$(LIB) -lConvert_Declib -lGeneradorAleatorioEnteros -I$(INCLUDE) -std=c++14

#Create & delete directories 

Directories :
	@echo [+] Creating direcories
	@mkdir obj lib bin

delete_directories : 
	@echo [+] Deleting directories
	@rmdir obj lib bin

#clean & mr.proper

clean :
	@echo [+] Deleting objects
	@-rm $(OBJ)/*
        
mr.proper :
	@echo [+] Deleting everything
	@-rm $(OBJ)/*
	@-rm $(LIB)/*
	@-rm $(BIN)/*
