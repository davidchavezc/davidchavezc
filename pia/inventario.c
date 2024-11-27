#include <stdio.h>
#include <string.h>
#define max 32
int venta(int stock, int cantidad_venta)
{
	if(cantidad_venta>stock)
	{
		printf("Error #003: No hay suficientes artículos en existencia para completar la venta.\n");
		return 1;
	}
	if(0>cantidad_venta)
	{
		printf("Error #004: La cantidad a vender no puede ser negativa.\n");
		return 1;
	}
	return 0;
}
void mostrar_inventario(int size, char articulos[size][max], int stock[])
{
	printf("\n---MOSTRANDO INVENTARIO---\n");
	for(int i=0;i<size;i++)
	{
		printf("\n%d  || %s", stock[i],articulos[i]);
	}
	printf("\n");
}
void registrar_venta(int size, char articulos[size][max], int stock[])
{
	int active=1, found;
	printf("\n---REGISTRAR VENTA---\n");
	while(active!=0)
	{
		found=1;
		char venta_art[max];
		printf("\nIndique el nombre del artículo a vender: "); scanf("%s", venta_art);
		for(int i=0;i<size;i++)
		{
			if(strcmp(venta_art,articulos[i])==0)
			{
				found=0;
				int cantidad_venta;
				printf("Hay %d %s en existencia. \nIndique cuántos venderá: ",stock[i],articulos[i]);
				scanf("%d", &cantidad_venta);
				int valid = venta(stock[i],cantidad_venta);
				// printf("%d", valid);
				if(valid==0)
				{
					stock[i]-=cantidad_venta;
					printf("Venta registrada con éxito. \nAhora quedan %d %s en existencia.", stock[i],articulos[i]);
					active=0; 
				}
			}
		}
		if(found!=0)
		{
			printf("Error #002: Artículo no encontrado. Porfavor, intente de nuevo.\n");
		}
	}
	printf("\n");
}
int main()
{
	printf("---INICIANDO INVENTARIO--");
	int size, sel, active;
	printf("\nIndique la cantidad de articulos en el inventario: "); scanf("%d", &size);

	char articulos[size][max];
	int stock[size];
	for(int i=0;i<size;i++)
	{
		printf("\nNombre del artículo #%d: ", i+1); scanf("%s", articulos[i]);
		printf("Unidades de %s en existencia: ", articulos[i]); scanf("%d", &stock[i]);
	}
	printf("Inventario creado exitosamente.\n"); active=0;
	do
	{
		printf("\n---SISTEMA DE INVENTARIO---\n");
		printf("\n1. Registrar venta\n2. Mostrar inventario\n3. Salir\n");
		printf("Elige una opción: "); scanf("%d", &sel);
		switch(sel)
		{
			case(1):
				registrar_venta(size,articulos,stock);
				active=1;
				break;
			case(2):
				mostrar_inventario(size, articulos, stock);
				active=1;
				break;
			case(3):
				printf("\n");
				return 0;
			default:
				printf("Error #001: Operación no válida. Porfavor, intente nuevamente.");
				active=1;

		}
	}
	while(active!=0);				
}