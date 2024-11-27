// Sumar 1-2+3-4...n
#include <stdio.h> 
int main(){
    int max_valid,cont,suma=0,suma_pares=0,suma_impares=0, neg;
    printf("Indique el total de numeros a calcular: "); 
    scanf("%d",&max_valid);
    cont = 1;
    while (cont<=max_valid)
    {
        if(cont%2==0){
            neg=cont*-1;
            suma_pares+=neg;
        }
        else{
            suma_impares+=cont;
        }
        cont++;
    }
    suma=suma_impares+suma_pares;
    printf("La suma total es: %d", suma);
    return 0;
}
// CODIGO COMPLETADO Y VERIFICADO EN 29 DE SEPTIEMBRE A 01:04 