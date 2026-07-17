#include <stdio.h>

// Prototipos de funciones
float calcularValorVehiculo();
void calcularValorRecaudado(int nrVehiculos, float *totalRecaudado);

int main(){
    int nrVehiculos;
    float totalRecaudado = 0.0;

    do{
        printf("Ingrese la cantidad de vehiculos: ");
        scanf("%i", &nrVehiculos);
    }while(nrVehiculos<1);

    // Paso por referencia: se envia la direccion de totalRecaudado
    // para que la funcion pueda modificar su valor directamente.
    calcularValorRecaudado(nrVehiculos, &totalRecaudado);

    printf("--------------------------------------\n");
    printf("-Total Recaudado: %.2f", totalRecaudado);
    printf("\n--------------------------------------\n");
    return 0;
}

//Funciones-------------------------------------------------------------------------------------------

// Esta funcion NO recibe parametros y devuelve un valor (paso por valor al retornar)
float calcularValorVehiculo(){
    int tipoVehiculo;
    float totalVehiculo = 0.0, horas;
    float carro=1.50, moto=1.00, bicicleta=0.50, calculo;

    do{
        printf("-TIPOS DE VEHICULO:\n[1] Carro.\n[2] Moto.\n[3] Bicicleta.\n-Escoja el tipo: ");
        scanf("%i", &tipoVehiculo);
        if(tipoVehiculo<1 || tipoVehiculo>3){
            printf("-ERROR 404.\nNUMERO NO VALIDO, VUELVE A INGRESAR\n");
        }
    }while(tipoVehiculo<1 || tipoVehiculo>3);

    do{
        printf("-Ingrese la cantidad de horas: ");
        scanf("%f", &horas);
    }while(horas<1.00 || horas>24.00);

    switch(tipoVehiculo){
        case 1:
        calculo = carro*horas;
        break;

        case 2:
        calculo = moto*horas;
        break;

        case 3:
        calculo = bicicleta*horas;
        break;

        default:
        printf("\nValor Incorrecto, Ingrese un numero del 1 al 3.\n");
    }
    totalVehiculo = totalVehiculo + calculo;

    printf("Valor a pagar por este vehiculo: %.2f\n", totalVehiculo);
    return totalVehiculo;
}

// Esta funcion recibe nrVehiculos POR VALOR (una copia)
// y totalRecaudado POR REFERENCIA (un puntero a la variable original)
void calcularValorRecaudado(int nrVehiculos, float *totalRecaudado){
    int i;
    for(i = 1; i <= nrVehiculos; i++){
        printf("\n--- VEHICULO %i ---\n", i);

        // Se acumula el valor usando el puntero (*totalRecaudado)
        // por eso los cambios se reflejan tambien en main()
        *totalRecaudado = *totalRecaudado + calcularValorVehiculo();
    }
}
