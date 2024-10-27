#include <stdio.h>
int main(){
	int limite;
	printf("Ingrese el limite de la serie: "); scanf("%i",&limite);
	printf("Limite: %d \n", limite);
	for (int cont=1;limite>=cont;cont++){
		for (int alt=1;cont>=alt;alt++){
			printf("%d ", cont);
		}
		printf("\n");
	}
}
