#include <stdio.h>
// Crea un programa que encuentre e imprima los multiplos de tres en 'n' numeros
int main(){
    int counter, numeros;
    printf("Ingrese el total de numeros a validar: "); scanf("%d",&numeros);
    while (counter<=numeros)
    {
        if(counter%3==0){
            printf("%d\n", counter);
        }
        counter++;
    }
    return 0;
}
// PROGRAMA COMPLETO Y VERIFICADO CON FECHA 29 DE SEPTIEMBRE 00:17