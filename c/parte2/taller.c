// Ciclos, while, for, do-while
#include <stdio.h>
int main()
{
	int numero;
	do 
	{
		printf("Introduce un numero mayor que 5: "); scanf("%d",&numero);
		if (numero<=5)
		{
			printf("Número invalido. Intente nuevamente.\n");
		}
	}
	while (numero<=5);
	printf("Has introducido el numero %d, que es mayor que 5.\n", numero);
	return 0;
}
