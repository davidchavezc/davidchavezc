#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

// Tablero con notación simplificada de piezas
char tablero[SIZE][SIZE] = {
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};

// Imprime el tablero de ajedrez
void imprimir_tablero() {
    printf("  a b c d e f g h\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", SIZE - i);
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

// Convierte coordenadas de texto a índice del tablero
int convertir(char c) {
    return c - 'a';
}

// Mueve una pieza en el tablero
void mover_pieza(int x1, int y1, int x2, int y2) {
    if (tablero[y1][x1] != ' ') { // Verificar que hay una pieza en la posición inicial
        tablero[y2][x2] = tablero[y1][x1];
        tablero[y1][x1] = ' ';
    } else {
        printf("No hay pieza en esa posición.\n");
    }
}

int main() {
    char inicio_col, fin_col;
    int inicio_fila, fin_fila;

    printf("Ajedrez Básico\n");
    imprimir_tablero();

    while (1) {
        printf("Ingrese su movimiento (ej. e2 e4): ");
        scanf(" %c%d %c%d", &inicio_col, &inicio_fila, &fin_col, &fin_fila);

        int x1 = convertir(inicio_col);
        int y1 = SIZE - inicio_fila;
        int x2 = convertir(fin_col);
        int y2 = SIZE - fin_fila;

        mover_pieza(x1, y1, x2, y2);
        imprimir_tablero();
    }

    return 0;
}

