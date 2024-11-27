#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTOS 100
#define MAX_NOMBRE 50

int main() {
    // Declarar arreglos para productos y stock
    char productos[MAX_PRODUCTOS][MAX_NOMBRE];
    int stock[MAX_PRODUCTOS];
    int numProductos, opcion;

    // Ingresar el número de productos
    printf("Ingrese el número total de productos: ");
    scanf("%d", &numProductos);

    // Ingreso de datos del inventario
    for (int i = 0; i < numProductos; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf("%s", productos[i]);
        printf("Ingrese la cantidad inicial en stock para %s: ", productos[i]);
        scanf("%d", &stock[i]);
    }

    do {
        // Mostrar el menú
        printf("\nMenú de opciones:\n");
        printf("1. Registrar una venta\n");
        printf("2. Mostrar inventario\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            // Registrar una venta
            char productoVendido[MAX_NOMBRE];
            int cantidadVendida;
            int encontrado = 0;

            printf("Ingrese el nombre del producto vendido: ");
            scanf("%s", productoVendido);

            for (int i = 0; i < numProductos; i++) {
                if (strcmp(productos[i], productoVendido) == 0) {
                    encontrado = 1;

                    printf("Ingrese la cantidad a vender: ");
                    scanf("%d", &cantidadVendida);

                    if (cantidadVendida <= stock[i]) {
                        stock[i] -= cantidadVendida;
                        printf("Venta realizada. Stock restante de %s: %d\n", productos[i], stock[i]);
                    } else {
                        printf("Error: No hay suficiente stock para realizar la venta.\n");
                    }
                    break;
                }
            }

            if (!encontrado) {
                printf("Error: El producto no existe en el inventario.\n");
            }

        } else if (opcion == 2) {
            // Mostrar inventario
            printf("\nInventario actual:\n");
            for (int i = 0; i < numProductos; i++) {
                printf("%s: %d unidades\n", productos[i], stock[i]);
            }
        } else if (opcion == 3) {
            // Salir
            printf("Saliendo del programa...\n");
        } else {
            // Opción no válida
            printf("Opción no válida, intente de nuevo.\n");
        }

    } while (opcion != 3);

    return 0;
}
