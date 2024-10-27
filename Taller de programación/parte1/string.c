#include <stdio.h>
#include <math.h>
int main () 
{
char name[32];
printf("Ingresa tu nombre: ");
fgets(name, 32, stdin);
strtok(name, "\n");
printf("%s, es un lindo nombre", name);
return 0;
}
