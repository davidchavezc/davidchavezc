#include <stdio.h>
int main()
{
	int n, suma=0,mult=0;
	printf("¿Cuántos números va a calcular? "); scanf("%d", &n);
	int numeros[n];
	for (int i = 0; n > i; i++)
	{
		printf("Ingrese el %d número: ",i+1); scanf("%d", &numeros[i]);
	}
	for (int i = 0; n > i; i++)
	{
		suma+=numeros[i];
	}
	printf("El resultado de la suma de los numeros es %d, su promedio es %d \n", suma, suma/n);
	return 0;
}
