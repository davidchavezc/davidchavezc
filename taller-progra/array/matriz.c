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
	printf("\nLa suma de los elementos de la matriz es: %d", suma);
	printf("\nEl promedio de los elementos de la matriz es: %d \n", suma/tamano/tamano);
	printf("\nDiagonal principal: \n");
	for(int i=0;i<tamano;i++)
	{
		for(int j=0;j<tamano;j++)
		{
			if(i==j)
			{
				printf("%d ", array[i][j]);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
