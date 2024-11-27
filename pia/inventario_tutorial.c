#include <stdio.h>
#include <string.h>
#define max 20
void mostrar_inventario(int elementos, int cant[max], char NPro[elementos][max]){
    for(int i = 0;i<elementos;i++){
        printf("%d || %s\n", cant[i], NPro[i]);
    }
    printf("\n");
}
void registar_venta(int elementos, int cant[max], char NPro[elementos][max]){
    char buscar[max]; int encontrar = 0; int venta; int encontrado=0;
    printf("\nIndique el artículo a vender: "); scanf("%s", buscar);
    for(int i = 0; i < elementos; i++){
        if(strcmp(buscar, NPro[i])==0){
            printf("Hay %d %s en existencias. Indique cuantos vender: ", cant[i], NPro[i]);
            scanf("%d", &venta);
            cant[i]-=venta;
            printf("Venta realizada con exito. Ahora hay %d %s en existencia\n", cant[i], NPro[i]);
            encontrado = 1;
        }
        if(encontrado!=1){
            printf("Lo sentimos, no se encontró el artículo\n");
        }
    }
}
int main(){
    int elementos, opcion;
    printf("Indique el tamaño del inventario: "); scanf("%d", &elementos);
    char NPro [elementos][max]; int cant[elementos];
    for(int i=0;i<elementos;i++){
        printf("Indique nombre del articulo %d: ", i); scanf("%s", NPro[i]);
        printf("Indique cuantos %s hay en existencia: ", NPro[i]); scanf("%d", &cant[i]);
        printf("\n");
    }
    while(opcion!=3){
        printf("\nElija una opción (1 para venta, 2 para mostrar): "); scanf("%d", &opcion);
        switch(opcion){
            case 1:
                registar_venta(elementos, cant, NPro);
                break;
            case 2:
                mostrar_inventario(elementos, cant, NPro);
                break;
            case 3:
                return 0;
            default:
                printf("\nError 1, intente de nuevo.");
        }
    }
}