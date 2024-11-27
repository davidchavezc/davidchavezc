#include <stdio.h>
int main(){
    int contador = 1, x;
    printf("Ingrese el numero para calcular su tabla: "); scanf("%d",&x);
    while (10>=contador){
        printf("%d * %d = %d \n", x, contador, x*contador);
        contador++;
    }
    return 0;
}