#include <stdio.h>
int main () {
	char name[32]; 
	int area;
	float horas, base, extra;
	// establecemos variables, area es una lista desplegable pues podemos usar print, pero como
	// ejecutaremos operaciones con los demás números pues debemos guardarlos como float
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
			if (horas>40) {
				base = 23.25 * 40.0;
				extra = (horas-40) * 46.50;
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, base + extra);
			}
			else {
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, horas*23.25);
			}
			break;
		case 2:
			if (horas>40) {
				base = 25.20 * 40.0;
				extra = (horas-40) * 50.40;
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, base + extra);
			}
			else {
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, horas*25.20);
			}
			break;
		case 3:
			if (horas>40) {
				base = 24.30 * 40.0;
				extra = (horas-40) * 48.60;
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, base + extra);
			}
			else {
				printf("Estimado %s, su pago de nomina corresponde a $%.2f pesos. ", name, horas*24.30);
			}
			break;
		default:
			printf("Error, esa area no es valida. Intente de nuevo, por favor.");
		// de manera que si el usuario ingresa un area no valida, el programa no corra.
	}
	return 0;
}
