
#ifndef GENERADOR_ALEATORIO_ENTEROS
#define GENERADOR_ALEATORIO_ENTEROS

#include <random>  // para la generación de números pseudoaleatorios
#include <chrono>  // para la semilla

using namespace std;

/////////////////////////////////////////////////////////////////////////////
class GeneradorAleatorioEnteros
{  
private:
	
	mt19937 generador_mersenne;    // Mersenne twister
	uniform_int_distribution<int>  distribucion_uniforme;
	
	/************************************************************************/
	
	long long Nanosec(void);
	
	/************************************************************************/ 
	
public:
	
	/************************************************************************/
		
	GeneradorAleatorioEnteros(void);
	
	/************************************************************************/  
	GeneradorAleatorioEnteros(int min, int max);
	
	/************************************************************************/
	
	int Siguiente(void);
	
	/************************************************************************/

};
#endif
/////////////////////////////////////////////////////////////////////////////

