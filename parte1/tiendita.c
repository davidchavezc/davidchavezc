#include <stdio.h>
int main() {
int zona;
float consumo;
char name[20];
printf("Ingrese su nombre: \n");
fgets(name, 20, stdin);
printf("Ingrese su zona: \n 1 para Monterrey. \n 2 para San Pedro. \n 3 para San Nicolas. \n 4 para Guadalupe. \n");
scanf("%d",&zona);
printf("Ingrese su consumo en KwH: ");
scanf("%f",&consumo);
switch(zona) {
	case 1:
		printf("Estimado %s su pago es de $%.2f pesos.", name, consumo * 0.85);
		break;
	case 2:
		printf("Estimado %s su pago es de $%.2f pesos.", name, consumo * 0.90);
		break;
	case 3:
		printf("Estimado %s su pago es de $%.2f pesos.", name, consumo * 0.87);
		break;
	case 4:
		printf("Estimado %s su pago es de $%.2f pesos.", name, consumo * 0.82);
		break;
	default:
		printf("Error, la zona no es valida.");	
}
return 0;
}

