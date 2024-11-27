// Cree un programa que le pida al usuario un numero
// si este supera  a 10, que multiplique, si no, que los sume
#include <stdio.h>
int main(){
    int numero, resultado=0, cont=1;
    printf("Porfavor, ingrese un numero: "); scanf("%d",&numero);
    if (numero>10)
    {
        resultado=1;
        while (10>cont)
        {
            resultado*=cont;
            cont++;
        }
    }
    else {
        while (cont<=numero)
        {
            resultado+=cont;
            cont++;
        }
    }
printf("El resultado es %d\n",resultado);
return 0;
}

// CODIGO CORRECTO Y VERIFICADO CON FECHA 29 DE SEPTIEMBRE 00:10