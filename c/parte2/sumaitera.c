#include <stdio.h>
#define max 5
int main(){
    int contador = 1, suma = 0;
    while (contador<=100){
        suma+=contador;  
        contador++;
    }
    printf("%d", suma);
    return 0;
}