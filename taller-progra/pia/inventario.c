#include <stdio.h>
#include <string.h>
void mostrar_inventario(int size, char articulos[size][20], int stock[])
{
	for(int i=0;i<size;i++)
	{
		printf("\nQuedan %d unidades de %s.", stock[i],articulos[i]);
	}
}
void registrar_venta(int size, char articulos[size][20], int stock[])
{
	char venta_art[20];
	printf("Indique el nombre del artículo a vender: "); scanf("%s", venta_art);
	printf("%s y %s", articulos[0], venta_art);
	if(strcmp(articulos[0],venta_art)!=0)
	{
		printf("Prueba correcta.");
	}
}
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
	// for(int i=0;i<size;i++)
	// {
	//	printf("\nQuedan %d unidades de %s.", stock[i],articulos[i]);
	//}
	//mostrar_inventario(size, articulos, stock);
	registrar_venta(size,articulos,stock);
	printf("\n");
	return 0;
}
