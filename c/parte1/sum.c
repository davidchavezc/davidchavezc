#include <stdio.h>
int n=0, i;
int main(){
printf("Digite un numero: "); scanf("%d",&n);
i=1;
	if (n>10){
		while (10>i) {
		n =n * i;
		i++;
		printf("%d\n", n);
		}
	} else {
		int	n_static = n;
		while (n_static>i) {
			n = n + i;
			i++;
			printf("%d\n", n);
		}
	}
	printf("%d", n);
}
