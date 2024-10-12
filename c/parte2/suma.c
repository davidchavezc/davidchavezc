#include <stdio.h>
int main(){
    int i, c;
    float suma = 0, x;
    printf("Cuantas numeros va a promediar: ");
    scanf("%d", &i);
    c=1;
    while (c<=i){
        printf("\nIngrese numero %d: ", c); scanf("%f", &x);
        suma += x;
        c++;
    }
    printf("\nSuma de los numeros: %.2f", suma);
    printf("\nPromedio de los numeros: %.2f ", suma / i);
    return 0;
}