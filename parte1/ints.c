#include <stdio.h>
#include <math.h>
int main () 
{
char name[32];
printf("Ingresa tu nombre: ");
fgets(name, 32, stdin);
printf("%s es un pendejo", name);
return 0;
}
