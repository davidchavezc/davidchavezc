#include <stdio.h>
#define max 100
int main(){
    int cont = 1, suma;
    while (cont<max){
        suma+= cont;
        cont++;
    }
    printf("\n%d", suma);
    return 0;
}