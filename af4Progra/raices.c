#include <stdio.h>
#include <math.h>

void calcular_raices(int a, int b, int c, FILE *output) {
    double discriminante = b * b - 4 * a * c;
    double r1, r2;
    /*Aquí calculamos el discriminante y determinamos el tipo de raíz que tienen en base al valor del discriminante*/ 
    
    if (discriminante > 0) {
        r1 = (-b + sqrt(discriminante)) / (2 * a);
        r2 = (-b - sqrt(discriminante)) / (2 * a);
        fprintf(output, "Raíces reales y diferentes\nr1=%.2f r2=%.2f\n", r1, r2);
    } else if (discriminante == 0) {
        r1 = r2 = -b / (2 * a);
        fprintf(output, "Raíces reales e iguales\nr1=r2=%.2f\n", r1);
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        fprintf(output, "Raíces complejas\nr1=%.2f+%.2fi r2=%.2f-%.2fi\n", parteReal, parteImaginaria, parteReal, parteImaginaria);
    } /*En esta parte solamente imprimimos para cada escenario el tipo de raices, y el valor de cada una de ellas*/
}
int main() {
    FILE *input = fopen("DATA.txt", "r");
    FILE *output = fopen("RAICES.txt", "w");
    // Con el parámetro r se lee del archivo DATA.txt y con el parámetro w se crea el archivo RAICES.txt

    if (input == NULL || output == NULL) {
        printf("Error al abrir los archivos.\n");
        return 1;
        // Validamos que el archivo DATA.txt se haya leído con éxito, y que RAICES.txt se haya creado con éxito.
    }

    int a, b, c; // Inicializamos un bucle necesario para las 60 ecuaciones en total
    for (int i = 0; i < 60; i++) {
        fscanf(input, "%d %d %d", &a, &b, &c); //Leemos del archivo DATA.txt los valores para calcular
        fprintf(output, "%02d) %dx^2 + %dx + %d = 0\n", i + 1, a, b, c); /*Aquí imprimimos nuestros datos de entrada, se utiliza
        el +1 pues el contador inicia en 0, entonces tenemos que mostrar la primera ecuación con 1, se escribe al archivo...*/
        
        calcular_raices(a, b, c, output); // Aquí llamamos a la función calcular raíces de arriba
    }

    fclose(input);
    fclose(output);
    /*Cerramos los archivos de entrada y salida, finalizamos el programa*/
    return 0;
}