#include <stdio.h>
#include<string.h>
int main() {
    int mes, dia;
    char signo[12];
    printf("Ingrese su dia de nacimiento: "); scanf("%d",&dia);
    printf("Ingrese su mes de nacimiento: ");scanf("%d",&mes);
    switch(mes){
        case 1:
            if (dia<=19){
                strcpy(signo, "capricornio");
            }
            else{
                strcpy(signo, "acuario");
        break;
        case 2:
            if (dia<=18)
            {
                strcpy(signo,"acuario");
            }
            else{
                strcpy(signo,"piscis");
            }
        break;
        case 3:
            if (dia<=20)
            {
                strcpy(signo,"piscis");
            }
            else
            {
                strcpy(signo,"aries");
            }
        break;
        case 4:
            if (dia<=19)
            {
                strcpy(signo,"aries");
            }
            else
            {
                strcpy(signo,"tauro");
            }
        break;
        case 5:
            if (dia<=20)
            {
              strcpy(signo,"tauro");
            }
            else
            {
                strcpy(signo,"geminis");
            }
        break;
        case 6:
            if (dia<=20)
            {
                strcpy(signo,"geminis");
            }
            else
            {
                strcpy(signo,"cancer");
            }
        break;
        case 7:
            if (dia<=22)
            {
                strcpy(signo,"cancer");
            }
            else
            {
                strcpy(signo,"leo");
            }
        break;
        case 8:
            if (dia<=22)
            {
                strcpy(signo,"leo");
            }
            else
            {
                strcpy(signo,"virgo");
            }
        break;
        case 9:
            if (dia<=22)
            {
                strcpy(signo,"virgo");
            }
            else
            {
                strcpy(signo,"libra");
            }
        break;
        case 10:
            if (dia<=22)
            {
                strcpy(signo,"libra");
            }
            else
            {
                strcpy(signo,"escorpio");
            }
        break;
        case 11:
            if (dia<=21)
            {
                strcpy(signo,"escorpio");
            }
            else
            {
                strcpy(signo,"sagitario");
            }
        break;
        case 12:
            if (dia<=20)
            {
                strcpy(signo,"sagitario");
            }
            else
            {
                strcpy(signo,"capricornio");
            }
        break;
        default:
            printf("Error, ese mes no es valido. Porfavor, intente nuevamente.");
            return 1;
            }
    }
    printf("Tu signo es %s", signo);
    return 0;
}