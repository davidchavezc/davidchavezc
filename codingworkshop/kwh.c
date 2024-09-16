#include <stdio.h>
int zona;
float consumo, tarifa;
char name[20];
void recibo() {
	printf("Estimado %s, su pago es de $%.2f pesos.", name, consumo * tarifa);
} 
int main() {
	printf("Ingrese su nombre: \n");
	fgets(name, 20, stdin);
	strtok(name, "\n");
	printf("Ingrese su zona: \n 1 para Monterrey. \n 2 para San Pedro. \n 3 para San Nicolas. \n 4 para Guadalupe. \n");
	scanf("%d",&zona);
	printf("Ingrese su consumo en KwH: ");
	scanf("%f",&consumo);
switch(zona) {
	case 1:
		tarifa = 0.85;
		recibo();
		break;
	case 2:
		tarifa = 0.90;
		recibo();
		break;
	case 3:
		tarifa = 0.87;
		recibo();
		break;
	case 4:
		tarifa = 0.82;
		recibo();
		break;
	default:
		printf("Error, la zona no es valida.");	
}
return 0;
}

