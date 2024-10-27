// Sumar pares desde n hasta m
#include <stdio.h>
int main(){
    int n, m, i, suma=0;
    printf("Ingrese un numero: "); scanf("%d", &n);
    printf("Ingrese un numero mayor: "); scanf("%d", &m);
    i = n;
    while (i<=m)
    {
        if (i%2==0)
        {
            suma+=i;
        }
        i++;
    }
    printf("La suma de los pares entre %d y %d es %d.", n, m, suma);
    return 0;
}
// CODIGO COMPROBADO Y FINALIZADO CON FECHA 29 DE SEPTIEMBRE A LA 01:17