//Convert_Declib.cpp

#include <iostream>
#include <string>
#include "GeneradorAleatorioEnteros.h"
#include "Convert_Declib.h"
using namespace std;

//Function that shows an array and a message.
//"n_datos" is the size of the array (default = TAM_BITS)
//"datos_linea" is the nummber of elements that are shown in a line (default = TAM_BITS)
void ShowArray(const char *msg, int *pv, int n_datos, int datos_linea){
	cout << msg << endl;

	for(int i = 0; i < n_datos; i++){
		cout << *(pv + i) << " ";
	
		if((i + 1) % datos_linea == 0){
			cout << endl;
		}
	}
	cout << endl;
}


//Function that convert decimal to binary by using a for loop and 
//storing the binary numbers in "bin" array
void Convert_bin(int *bin, int n){

	for(int i = TAM_BITS - 1; i >= 0; i--){
		*(bin + i) = n%2;
		n /= 2;
	}
}

//Function that convert decimal to hexadecimal
//Creates a empty string to store the final number. Using a 
//while loop decimal is conerted. If number ("reminder") is 
//greater than 10, number is converted to a char, depending of the 
//number
string Convert_hex(int n){

	string hex_str = "";

	while(n > 0){
		int reminder = n%16;

		if(reminder < 10){
			hex_str = to_string(reminder) + hex_str;
		}
		else{
			hex_str = (char)('A' + reminder - 10) + hex_str;
		}
		
		n /= 16;
	}
	return hex_str;
}

//Works very similar to Convert_bin (basically is the same thing xdd)
void Convert_oct(int *oct, int n){

	for(int i = TAM_BITS - 1; i >= 0; i--){
		*(oct + i) = n%8;
		n /= 8;
	}
}









