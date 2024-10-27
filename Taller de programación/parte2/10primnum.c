#include <stdio.h>
int main(){
    int i, suma=0;
    for (i=1;10>=i;i++){
        if (i%2==0){
            suma+=i;
        }
    }
    printf("La suma de los 10 primeros numeros pares es %d", suma);
    return 0;
}