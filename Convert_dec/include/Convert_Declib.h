//convert_declib.h

#include <iostream>
using namespace std;

#ifndef CONVERT_DECLIB
#define CONVERT_DECLIB

void Convert_bin(int *bin, int n);
//void Convert_hex(int *hex, int n);
//void Convert_oct(int *oct, int n);
void ShowArray(const char *msg, int *pv, int n_datos, int datos_linea);

#endif