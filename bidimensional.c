#include <stdio.h>

int main() {

    int matriz[3][2];
    int dato, suma = 0;
    float promedio;

    // Ingreso de datos
    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 2; y++) {
            printf("Ingrese el dato de la posicion (%i,%i): ", x, y);
            scanf("%i", &dato);
            matriz[x][y] = dato;
            suma = suma + dato;
        }
    }

    // Mostrar la matriz
    printf("========================================");
    printf("\nLa matriz resultante de 3x2 es:\n");

    for(int x = 0; x < 3; x++) {
        for(int y = 0; y < 2; y++) {
            printf("[%i] ", matriz[x][y]);
        }
        printf("\n");
    }
    printf("========================================");

    // Calcular y mostrar el promedio
    promedio = (float)suma / 6;
    printf("\nLa suma total de los datos es: %i", suma);
    printf("\nEl promedio de los datos es: %.2f\n", promedio);

    return 0;
}
