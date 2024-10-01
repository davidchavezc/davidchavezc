#include <stdio.h>

int main() {
    int dia, mes;

    // Pedimos la fecha de nacimiento
    printf("Introduce el día de nacimiento: ");
    scanf("%d", &dia);
    printf("Introduce el mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    // Determinar el signo zodiacal
    switch(mes) {
        case 1:
            if (dia <= 19) {
                printf("Tu signo es Capricornio\n");
            } else if (dia <= 31) {
                printf("Tu signo es Acuario\n");
            } else {
                printf("Fecha inválida\n");
            }
            break;
        case 2:
            if (dia <= 18) {
                printf("Tu signo es Acuario\n");
            } else if (dia <= 29) {
                printf("Tu signo es Piscis\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 3:
            if (dia <= 20) {
                printf("Tu signo es Piscis\n");
            } else if (dia <= 31) {
                printf("Tu signo es Aries\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 4:
            if (dia <= 19) {
                printf("Tu signo es Aries\n");
            } else if (dia <= 30) {
                printf("Tu signo es Tauro\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 5:
            if (dia <= 20) {
                printf("Tu signo es Tauro\n");
            } else if (dia <= 31) {
                printf("Tu signo es Géminis\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 6:
            if (dia <= 20) {
                printf("Tu signo es Géminis\n");
            } else if (dia <= 30) {
                printf("Tu signo es Cáncer\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 7:
            if (dia <= 22) {
                printf("Tu signo es C�ncer\n");
            } else if (dia <= 31) {
                printf("Tu signo es Leo\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 8:
            if (dia <= 22) {
                printf("Tu signo es Leo\n");
            } else if (dia <= 31) {
                printf("Tu signo es Virgo\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 9:
            if (dia <= 22) {
                printf("Tu signo es Virgo\n");
            } else if (dia <= 30) {
                printf("Tu signo es Libra\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 10:
            if (dia <= 22) {
                printf("Tu signo es Libra\n");
            } else if (dia <= 31) {
                printf("Tu signo es Escorpio\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 11:
            if (dia <= 21) {
                printf("Tu signo es Escorpio\n");
            } else if (dia <= 30) {
                printf("Tu signo es Sagitario\n");
            } else {
                printf("Fecha inv�lida\n");
            }
            break;
        case 12:
            if (dia <= 21) {
                printf("Tu signo es Sagitario\n");
            } else if (dia <= 31) {
                printf("Tu signo es Capricornio\n");
            } else {
                printf("Fecha inválida\n");
            }
            break;
        default:
            printf("Mes inválido\n");
    }

    return 0;
}
