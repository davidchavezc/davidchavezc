#include <stdio.h>
int main(){
    int contador = 1, n;
    float suma;
    printf("Cuantos numeros se van a calcular: "); scanf("%d", &n);
    while (contador<=n){
        suma+=contador;  
        contador++;
    }
    printf("\nSuma de los numeros: %.2f", suma); // Suma de los numeros 
    printf("\nPromedio de los numeros: %.2f", suma / n);
    return 0;
}