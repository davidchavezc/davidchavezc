#include <stdio.h>
#include <stdlib.h>
int num1, num2, num3, min_num, max_num;
void noiguales() {
	if (num1 == num2 || num2 == num3 || num1 == num3) {
		printf("Error. Los números no deben ser iguales. Intente de nuevo.");
		sleep(1);
		exit(1);
	}
}
void validnum() {
	if (num1 > num2 && num2 > num3) {
	max_num = num1;
}	else if (num2 > num3) {
			max_num =num2;
	}	else {
			max_num=num3;
	}	
	if (num1 < num2 && num2 < num3) {
	min_num = num1;
}	else if (num2 < num3) {
			min_num =num2;
	}else {
			min_num=num3;
		}
}
int main() {
printf("Ingrese el primer numero: ");
scanf("%d", &num1);
printf("Ingrese el segundo numero: ");
scanf("%d", &num2);
printf("Ingrese el tercer numero: ");
scanf("%d", &num3);
noiguales();
validnum();
printf("El mayor de los tres numeros es %d y el menor es %d", max_num, min_num);
return 0;
}


