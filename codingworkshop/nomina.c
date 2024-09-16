#include <stdio.h>
char name[32]; 
int area;
float horas, tarifa, extra;
// declaramos variables, area es una lista desplegable pues podemos usar print, pero como
// ejecutaremos operaciones con los demás números pues debemos guardarlos como float

void recibo() {
	if (horas>40) {
				extra = (horas-40);
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, tarifa * 40 + extra * tarifa * 2);
			}
			else {
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, tarifa * horas);
			}
}
// La funcion recibo se encarga de hacer los calculos e imprimir los valores al cliente.

int main() {
	printf("Ingrese su nombre: ");
	fgets(name, 32, stdin);
	// usamos fgets, sus argumentos son (nombre de var, tamaño, y si es in/out)
	strtok(name, "\n");
	printf("Ingrese sus horas laboradas: ");
	scanf("%f", &horas);
	printf("-Lista de areas- \n 1. Recursos Humanos \n 2. Produccion \n 3. Sistemas \n Ingrese su area: ");
	scanf("%d",&area);
	// imprimimos el texto en varias lineas para simular una lista de elecciones, se toma el valor
	// del area como un int y usamos un switch statement para hacer el calculo
	switch (area) {
		case 1:
				tarifa = 23.25;
				recibo();
			break;
		case 2:
				tarifa = 25.20;
				recibo();
			break;
		case 3:
				tarifa = 24.30;
				recibo();
			break;
		default:
			printf("Error, esa area no es valida. Intente de nuevo, por favor.");
		// de manera que si el usuario ingresa un area no valida, el programa no corra.
	}
	return 0;
}
