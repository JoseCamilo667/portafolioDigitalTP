#include <stdio.h>

int main(){
    int notas[5], valor, suma = 0;
    float promedio;

    for (int p = 0; p < 5; p++){
        printf("Ingrese la nota %i: ", p);
        scanf("%i", &valor);
        notas[p] = valor;
        suma += valor;
    }

    for (int i = 0; i < 5; i++){
        printf("La nota en la posicion %i es: %i\n", i, notas[i]);
    }

    promedio = (float)suma / 5;
    printf("El promedio de las notas es: %.2f\n", promedio);

    return 0;
}
