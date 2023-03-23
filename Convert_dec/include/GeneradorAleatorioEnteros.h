
#ifndef GENERADOR_ALEATORIO_ENTEROS
#define GENERADOR_ALEATORIO_ENTEROS

#include <random>
#include <chrono>

using namespace std;

class GeneradorAleatorioEnteros
{  
private:
	
	mt19937 generador_mersenne;
	uniform_int_distribution<int>  distribucion_uniforme;
	
	long long Nanosec(void);
	
public:
		
	GeneradorAleatorioEnteros(void);
	
	GeneradorAleatorioEnteros(int min, int max);
	
	int Siguiente(void);
	
};
#endif


