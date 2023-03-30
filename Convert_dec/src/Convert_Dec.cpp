//Convert_dec.cpp

#include <iostream>
#include <string>
#include "Convert_Declib.h"
#include "GeneradorAleatorioEnteros.h"
using namespace std;

int main(int argc, char* argv[]){
	
	//Program convert numbers between 0 - 255 (1111 1111)
	const int TAM_BITS = 8;
	
	//Arrays to store final numbers
	int bin[TAM_BITS];
	int oct[TAM_BITS];
	
	//Generate random integers
	GeneradorAleatorioEnteros g(0, 255);
	int n = g.Siguiente(); 
	
	//Data entry
	if(argc > 2){
		cerr << "ERROR: too many arguments" << endl;
		cerr << "Use: " << "[integer between 0 and 255]";
		cerr << endl << endl;
		exit(1);
	}
	
	if(argc == 2){
		n = atoi(argv[1]);
	}
	
	//Check the validity of the argument
	if(n < 0 || n > 255){
		cerr << "ERROR: integer must be 0 <= n <= 255";
		exit(2);
	}
	
	//By using the functions numbers are shown
	cout << "Number to convert: " << n;

	Convert_bin(bin, n);

	ShowArray("Binary number: ", bin, TAM_BITS, TAM_BITS);

	cout << "Hexadecimal number: " << endl;

	cout << Convert_hex(n) << endl;

	Convert_oct(oct, n);

	cout << endl;

	ShowArray("Octal number: ", oct, TAM_BITS, TAM_BITS);
}










