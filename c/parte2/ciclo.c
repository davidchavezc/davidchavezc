#include <stdio.h>
int main(){
	int cont, veces;
	printf("Indique el numero de veces que quiere imprimir Hola: "); scanf("%d",&veces);
	for(cont=1;veces>=cont;cont++){
		printf("Hola! Vuelta: %d \n", cont);
	}
	return 0;
}

