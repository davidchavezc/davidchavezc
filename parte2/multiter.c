#include <stdio.h>
int main(){
    int i, n, fact = 1;
    printf("Digite el numero del cual quiere sacar el factorial: \n"); scanf("%d", &n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d! es: %d", n, fact);
    return 0;
}