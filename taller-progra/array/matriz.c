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
			printf("Ingrese la posición [%d][%d] de la matriz: ", i+1, j+1);
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
	int find, found=0;
	printf("\nIndique un número para encontrarlo dentro de la matriz: "); scanf("%d", &find);
	for(int i=0;i<tamano;i++)
	{
		for(int j=0;j<tamano;j++)
		{
			if(array[i][j]==find)
			{
				printf("Valor %d encontrado en la posición [%d][%d]\n",find,i+1,j+1);
				found=1;
			}
		}
	}
	if(found!=1)
	{
		printf("El valor %d no se encuentra dentro de la matriz.",find);
	}
	printf("\n");
	return 0;
}
