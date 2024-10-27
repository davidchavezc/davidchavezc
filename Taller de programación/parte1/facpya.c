#include <stdio.h>
char nombre[20];
void z(int d, int m) {
    const char *s[] = {"Capricornio", "Acuario", "Piscis", "Aries", "Tauro", "Géminis", 
                       "Cáncer", "Leo", "Virgo", "Libra", "Escorpio", "Sagitario", "Capricornio"};
    int l[] = {20, 19, 21, 20, 21, 21, 23, 23, 23, 23, 22, 22};
    printf("%s, tu signo zodiacal es: %s\n", nombre, d < l[m-1] ? s[m-1] : s[m%12]);
}

int main() {
    int d, m;
    printf("Introduce tu nombre: ");
    fgets(nombre,20,stdin);
    strtok(nombre, "\n");
    printf("Introduce el mes de tu nacimiento (1-12): ");
    scanf("%d", &m);
    printf("Introduce el día de tu nacimiento: ");
    scanf("%d", &d);
    z(d, m);
    return 0;
}
