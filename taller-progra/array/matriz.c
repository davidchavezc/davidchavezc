#include <stdio.h>
int main()
{
	int tamano;
	printf("Indique el tamaño de la matriz: "); scanf("%d", &tamano);
	int array[tamano][tamano];
	for(int i=0;i<tamano;i++)
	{
		for(int j=0;j<tamano;j++)
		{
			printf("\nIngrese la posición [%d][%d] de la matriz: ", i, j);
			scanf("%d", &array[i][j]); 
		}
	}
	printf("\nMatriz: \n");
	for (int i=0;i<tamano;i++)
	{
		for(int j=0;j<tamano;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	int suma=0;
	for (int i=0;i<tamano;i++)
	{
		for(int j=0;j<tamano;j++)
		{
			suma+=array[i][j];
		}
	}
	printf("La suma de los elementos de la matriz es: %d\n", suma);
	return 0;
}
