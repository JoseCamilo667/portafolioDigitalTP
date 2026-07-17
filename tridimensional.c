#include <stdio.h>

int main() {
    float matriz[2][5][3] = {
        {
            {1, 8.5, 9.0},
            {1, 9.2, 8.5},
            {1, 7.0, 8.0},
            {1, 10.0, 9.5},
            {1, 6.5, 7.0}
        },
        {
            {2, 9.0, 8.0},
            {2, 7.5, 9.0},
            {2, 8.0, 7.5},
            {2, 9.5, 8.5},
            {2, 7.0, 8.0}
        }
    };
    
    printf("\nMostrar los datos de la matriz guardada:\n");
    
    for(int a = 0; a < 2; a++){
        printf("\nCapa %i:\n", a);
        for (int i = 0; i < 5; i++) {
            for (int c = 0; c < 3; c++) {
                printf("[%.2f]\t", matriz[a][i][c]);
            }
        printf("\n");
        }
    printf("\n");
    }

    return 0;
}


//OTRA FORMA DE ARREGLO TYRIDIMENSIONAL --------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {

    int matriz[2][2][3];

    // Ingreso de datos
    for(int c = 0; c < 2; c++) {
        for(int f = 0; f < 2; f++) {
            for(int co = 0; co < 3; co++) {
                printf("Ingrese el dato de la posicion (%i,%i,%i): ", c, f, co);
                scanf("%i", &matriz[c][f][co]);
            }
        }
    }

    // Mostrar la matriz
    printf("======================================");
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
    printf("======================================");

    return 0;
}
