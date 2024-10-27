#include <stdio.h>
#include <stdlib.h>
int main() {
char color [20];
char celebrityF [20];
char celebrityL [20];
char plural_noun [20];
printf("Enter a color: ");
scanf("%s", color);
printf("Enter a celebrity: ");
scanf("%s%s", celebrityF, celebrityL);
printf("Enter a plural noun: ");
scanf("%s", plural_noun);
printf("Roses are %s \n", color);
printf("Violets are %s \n", plural_noun);
printf("I love %s %s \n", celebrityF, celebrityL);
return 0;
}
