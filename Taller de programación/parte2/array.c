#include <stdio.h>
void bubble_sort(int num_list[],int size)
{
	for (int k = 0; k < size-1; k++)
	{
		for (int x = 0; x < size-1; x++)
		{
			if(num_list[x]>num_list[x+1])
			{
				int temp = num_list[x];
				num_list[x] = num_list[x+1];
				num_list[x+1] = temp;
			}
		}
	}
	
}
int main()
{
	int size=5;
	int num_list[size];
	for(int j = 0; size > j; j++)
	{
		printf("Ingrese el valor de la %d posición: ",j+1); scanf("%d",&num_list[j]);

	}
	// int size = sizeof(num_list)/sizeof(num_list[0]);
	// no es necesario agregar esto pues desde el inicio sabemos el tamaño del array
	bubble_sort(num_list, size);
	printf("El array ordenado es: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ",num_list[i]);
	}
	return 0;
}
