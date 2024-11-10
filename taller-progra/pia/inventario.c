#include <stdio.h>
#include <string.h>
#define max 32
int venta(int stock, int cantidad_venta)
{
	// printf("%d", cantidad_venta);
	if(cantidad_venta>stock)
	{
		printf("ERROR. NO TIENE SUFICIENTE EN STOCK PARA COMPLETAR LA VENTA.");
		return 1;
	}
	if(0>cantidad_venta)
	{
		printf("ERROR. LA CANTIDAD A VENDER NO PUEDE SER NEGATIVA");
		return 1;
	}
	return 0;
}
void mostrar_inventario(int size, char articulos[size][max], int stock[])
{
	for(int i=0;i<size;i++)
	{
		printf("\nQuedan %d unidades de %s.", stock[i],articulos[i]);
	}
}
void registrar_venta(int size, char articulos[size][max], int stock[])
{
	char venta_art[max];
	printf("Indique el nombre del artículo a vender: "); scanf("%s", venta_art);
	for(int i=0;i<size;i++)
	{
		if(strcmp(venta_art,articulos[i])==0)
		{
			int cantidad_venta;
			printf("Existen %d %s en existencia. Indique cuántos venderá: ",stock[i],articulos[i]); scanf("%d", &cantidad_venta);
			int valid = venta(stock[i],cantidad_venta);
			// printf("%d", valid);
			if(valid==0)
			{
				stock[i]-=cantidad_venta;
				printf("\nVenta registrada con éxito. Ahora quedan %d %s en existencia.", stock[i],articulos[i]);
			}
		}
	}
}
int main()
{
	int size;
	printf("Indique la cantidad de articulos en el inventario: "); scanf("%d", &size);
	char articulos[size][max];
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
