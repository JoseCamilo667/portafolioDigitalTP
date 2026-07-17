#include <stdio.h>
int main() {

    int matriz[3][2];
    int dato;

    // Ingreso de datos
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 2; y++) {
            printf("Ingrese el dato de la posicion (%i,%i): ", x, y);
            scanf("%i", &dato);
            matriz[x][y] = dato;
        }
    }

    // Mostrar la matriz
    printf("======================================");
    printf("\nLa matriz resultante de 3x2 es:\n");

    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 2; y++) {
            printf("[%i] ", matriz[x][y]);
        }
        printf("\n");
    }
    printf("======================================");

    return 0;
}