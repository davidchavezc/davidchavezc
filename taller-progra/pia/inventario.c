#include <stdio.h>
int main()
{
	int size;
	printf("Indique la cantidad de articulos en el inventario: "); scanf("%d", &size);
	char articulos[size][20];
	int stock[size];
	for(int i=0;i<size;i++)
	{
		printf("\nNombre del artículo #%d: ", i+1); scanf("%s", articulos[i]);
		printf("Unidades de %s en existencia: ", articulos[i]); scanf("%d", &stock[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("\nQuedan %d unidades de %s.", stock[i],articulos[i]);
	}
	printf("\n");
	return 0;
}
