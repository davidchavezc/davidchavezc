// Crea un programa que al digitar el numero 0, borre la pantalla
#include <stdlib.h>
#include <stdio.h>
int main() {
	char tecla;
	printf("-Borrar pantalla-\n");
	printf("---------------------\n");
	printf("---------------------\n");
	printf("Escriba el numero 0: ");
	scanf("%c", &tecla);
	fflush(stdin);
	if (tecla=='0'){
		system("cls");
		printf("Se limpio la pantalla exitosamente. \n");
		return 0;
		}
	else {
		printf("No se pudo limpiar la pantalla. Ingrese 0 para limpiar pantalla: ");
		scanf("%c", &tecla);
		if (tecla=='0'){
		system("cls");
		printf("Se limpio la pantalla exitosamente. \n");
		return 0;
		}
		else {
		printf("No funciono.");
	}
}
	return 0;
}
