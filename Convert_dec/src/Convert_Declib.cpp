//convert_declib.cpp

#include <iostream>
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

/*
int Convert_hex(int *hex, int n){

}

int Convert_oct(int *oct, int n){

}*/
