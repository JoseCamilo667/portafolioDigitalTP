#include <stdio.h>
int main(){
    int lista [5];
    lista[0] = 1;
    lista[1] = 3;
    lista[2] = 5;
    lista[3] = 4;
    lista[4] = 8;

    printf("Posicion 0: %i\n", lista [0]);
    printf("Posicion 1: %i\n", lista [1]);
    printf("Posicion 2: %i\n", lista [2]);
    printf("Posicion 3: %i\n", lista [3]);
    printf("Posicion 4: %i\n", lista [4]);
}
*/

/* otra manera de lita 
#include <stdio.h>
int main(){
    int lista [5] = {1, 3, 5, 4, 8};

    printf("Posicion 0: %i\n", lista [0]);
    printf("Posicion 1: %i\n", lista [1]);
    printf("Posicion 2: %i\n", lista [2]);
    printf("Posicion 3: %i\n", lista [3]);
    printf("Posicion 4: %i\n", lista [4]);
}


//OTRA FORMA DE ARREGLO UNIDIMENSIONAL ----------------------------------------------
#include <stdio.h>



int main(){
    int lista [5], valor;
    for (int p = 0; p<5; p++){
        printf("Ingrese el numero %i: ",p);
        scanf ("%i",&valor);
        lista[p]= valor;
    }
    
    for (int i = 0; i<5; i++){
        printf("El valor de la posicion %i : %i\n", i, lista[i]);
    }
    
}
