#include <stdio.h>
int mes, dia;
//Determinar el signo del zodiaco
int main() {
	printf("--Lista de meses-- \n1. Enero\n2. Febrero\n3. Marzo\n4. Abril\n5. Mayo\n6. Junio\n7. Julio\n");
	printf("8. Agosto\n9. Septiembre \n10. Octubre\n11. Noviembre\n12. Diciembre\nDigite su mes de nacimiento: ");
	scanf("%d",&mes);
	printf("Digite su dia de nacimiento: ");
	scanf("%d",&dia);
	switch (mes) {
		case 1:
			if (dia<=19){
			printf("Eres capricornio.");
		}
			else {
				printf("Eres acuario.");
			}
		break;
		case 2:
			if (dia<=18){
			printf("Eres acuario.");
		}
			else {
				printf("Eres piscis.");
			}
		break;
		case 3:
			if (dia<=20){
			printf("Eres piscis.");
		}
			else {
				printf("Eres aries.");
			}
		break;
		case 4:
			if (dia<=19){
			printf("Eres aries.");
			break;
		}
			else {
				printf("Eres tauro.");
			}
		break;
		case 5:
			if (dia<=20){
			printf("Eres tauro.");
		}
			else {
				printf("Eres geminis.");
			}
		break;
		case 6:
			if (dia<=20){
			printf("Eres geminis.");
		}
			else {
				printf("Eres cancer.");
			}
		break;
		case 7:
			if (dia<=22){
			printf("Eres cancer.");
		}
			else {
				printf("Eres leo.");
			}
		break;
		case 8:
			if (dia<=22){
			printf("Eres leo.");
		}
			else {
				printf("Eres virgo.");
			}
		break;
		case 9:
			if (dia<=22){
			printf("Eres virgo.");
		}
			else {
				printf("Eres libra.");
			}
		break;
		case 10:
			if (dia<=22){
			printf("Eres libra.");
		}
			else {
				printf("Eres escorpio.");
			}
		break;
		case 11:
			if (dia<=21){
			printf("Eres escorpio.");
		}
			else {
				printf("Eres sagitario.");
			}
		break;
		case 12:
			if (dia<=21){
			printf("Eres sagitario.");
		}
			else {
				printf("Eres aries.");
		break;
			}		
	}
return 0;
}