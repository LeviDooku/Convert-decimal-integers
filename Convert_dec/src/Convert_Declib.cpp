//convert_declib.cpp

#include <iostream>
#include <string>
#include "GeneradorAleatorioEnteros.h"
#include "Convert_Declib.h"
using namespace std;

const int TAM_BITS = 8;

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

void Convert_bin(int *bin, int n){

	for(int i = TAM_BITS - 1; i >= 0; i--){
		*(bin + i) = n%2;
		n /= 2;
	}
}


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

/*
string Convert_hex(int n){
    string hex_str = "";

    while (n > 0) {
        int remainder = n % 16;
        if (remainder < 10) {
            hex_str = to_string(remainder) + hex_str;
        } else {
            hex_str = (char)('A' + remainder - 10) + hex_str;
        }
        n /= 16;
    }

    return hex_str;
}
*/

void Convert_oct(int *oct, int n){

	for(int i = TAM_BITS - 1; i >= 0; i--){
		*(oct + i) = n%8;
		n /= 8;
	}
}









