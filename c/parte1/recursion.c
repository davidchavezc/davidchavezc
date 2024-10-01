#include <stdio.h>
int num, i_maxim, i;
int main (){
printf("Ingrese un numero: ");
scanf("%d",&num);
printf("Ingrese otro numero: ");
scanf("%d",&i_maxim);
i = 1;
while (i<=i_maxim) {
	printf("%d X %d = %d \n", num, i, num * i);
	i++;
}
return 0;
}
