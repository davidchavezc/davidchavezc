#include <stdio.h>
int main()
{
	int suma = 0, tope;
	printf("Indique el tope a sumar: "); scanf("%d", &tope);
	for(int i = 0;tope>=i;i++)
	{
		if(i%2==0)
		{
			suma+=i;
			printf("%d\n", i);
		}
	}
	printf("La suma de todos los pares del 0 al %d es: %d\n", tope, suma);
	return 0;
}
