#include <stdio.h>
int main()
{
	float saldo, movimiento;
	int seleccion=1;
	printf("\n--------- CAJERO AUTOMATICO FIME -------\n");	
	printf("¡Buenos días! Haga un deposito inicial para comenzar: $"); scanf("%f",&saldo);
	while (seleccion!=4)
	{
		printf("\n--------- CAJERO AUTOMATICO FIME -------\n");
		printf("¿Haremos algo más? \n");
		printf("1. Deposito de efectivo\n2. Retiro de efectivo\n3. Consultar saldo\n4. Terminar sesión\n");
		printf("Digite su opción: "); scanf("%d",&seleccion);
		switch(seleccion)
		{
			case 1:
				printf("Ingrese el monto a depositar: $"); scanf("%f", &movimiento);
				saldo+=movimiento;
				printf("\nDéposito exitoso. Saldo actual: $%.2f pesos. \n", saldo);
				break;
			case 2:
				printf("Ingrese el monto a retirar: $"); scanf("%f", &movimiento);
				if (movimiento>saldo)
				{
					printf("Operación no exitosa. No puede retirar una cantidad mayor a su saldo actual.");
					break;
				}
				saldo-=movimiento;
				printf("\nRetiro exitoso. Saldo restante: $%.2f pesos. \n", saldo);
				break;
			case 3:
				printf("\nSu saldo actual es de $%.2f pesos.\nPara aclaraciones, comuníquese al 81 8156 9600. \n", saldo);
				break;
			case 4:
				printf("¡Gracias por usar el cajero automático de FIME!\n");
				break;
			default:
				printf("\nLa selección no es válida, intente nuevamente.");

		}
	}
	return 0;
}

