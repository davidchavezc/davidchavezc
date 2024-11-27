#include <stdio.h>
int validarEstudiantes(int numero){
    if(numero==0||numero>20){
        printf("\nPorfavor indique un numero entre 0 y 20.");
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int numEstudiantes = 0, valid = 0, sumaCalificaciones=0;
    while(valid!=1){
    printf("Indique el número de estudiantes en el grupo: "); scanf("%d", &numEstudiantes);
    valid = validarEstudiantes(numEstudiantes);
    }
    float calificaciones[numEstudiantes];
    for(int i = 0; numEstudiantes > i; i++){
        printf("\nIndique la calificacion del estudiante %d: ", i+1); scanf("%f", &calificaciones[i]);
    }
    for(int j = 0; numEstudiantes>j;j++){
        sumaCalificaciones+=calificaciones[j];
    }
    float promedioCalificaciones = sumaCalificaciones/numEstudiantes;
    int supPromedio = 0;
    for(int k = 0; numEstudiantes>=k;k++){
        if(promedioCalificaciones<calificaciones[k]){
            supPromedio++;
        }
    }
    printf("\nDe los %i estudiantes, el promedio fue de %.1f y %d estudiantes consiguieron una calificación mayor al promedio\n", numEstudiantes, promedioCalificaciones, supPromedio);
    return 0;
}
