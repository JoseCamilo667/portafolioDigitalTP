#include <stdio.h>

int main() {

    int matriz[2][2][3];
    int suma = 0;
    float promedio;

    // Ingreso de datos
    for(int c = 0; c < 2; c++) {
        for(int f = 0; f < 2; f++) {
            for(int co = 0; co < 3; co++) {
                printf("Ingrese el dato de la posicion (%i,%i,%i): ", c, f, co);
                scanf("%i", &matriz[c][f][co]);
                suma = suma + matriz[c][f][co];
            }
        }
    }

    // Mostrar la matriz
    printf("========================================");
    printf("\nLa matriz resultante es:\n");

    for(int c = 0; c < 2; c++) {
        for(int f = 0; f < 2; f++) {
            for(int co = 0; co < 3; co++) {
                printf("[%i] ", matriz[c][f][co]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("========================================");

    // Calcular y mostrar el promedio
    promedio = (float)suma / 12;
    printf("\nLa suma total de los datos es: %i", suma);
    printf("\nEl promedio de los datos es: %.2f\n", promedio);

    return 0;
}
