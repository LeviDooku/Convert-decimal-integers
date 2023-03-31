//Convert_Declib.h

#include <iostream>
using namespace std;

#ifndef CONVERT_DECLIB
#define CONVERT_DECLIB

const int TAM_BITS = 8;


void Convert_bin(int *bin, int n=TAM_BITS);
string Convert_hex(int n);
void Convert_oct(int *oct, int n=TAM_BITS);
void ShowArray(const char *msg, int *pv, int n_datos, int datos_linea);

#endif
