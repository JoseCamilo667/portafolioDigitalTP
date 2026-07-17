#include <stdio.h>
float calcularValorCliente ();
void calcularValorRecaudado (int nrclientes, float *totalRecaudado); // valor por referencia

int main(){
    int nrClientes;
    float totalRecaudado = 0.0;

    do{
        printf("Ingrese la cantidad de clientes: ");
        scanf("%i", &nrClientes);
    }while(nrClientes<1);

    calcularValorRecaudado(nrClientes, &totalRecaudado);

    printf("--------------------------------------\n");
    printf("-Total Recaudado: %.2f", totalRecaudado);
    printf("\n--------------------------------------\n");
    return 0;
}

//Funcione para calcular el valor por cada cliente -------------------------------------------------------------------------------------------

float calcularValorCliente (){
    int consola;
    float totalCliente = 0.0, horas;
    float p=2.50, xb=2.00, n=1.50, calculo;
    
        do{
            printf("-CONSOLAS DISPONIBLES:\n[1] PlayStation.\n[2] Xbox.\n[3] Nintendo.\n-Escoja la consola: ");
            scanf("%i", &consola);
            if(consola<1 || consola>3){
                printf("-ERROR 404.\nNUMERO NO VALIDO, VUELVE A INGRESAR\n ");
            }
        }while(consola<1 || consola>3);

        do{
            printf("-Ingrese la cantidad de horas: ");
            scanf("%f", &horas);
        }while(horas<1.00 || horas>12.00);

        switch (consola){
            case 1:
            calculo=p*horas;
            break;

            case 2: 
            calculo=xb*horas;
            break;

            case 3:
            calculo=n*horas;
            break;

            default:
            printf("\nValor Incorrecto, Ingrese un numero del 1 al 3.\n");
        }
        totalCliente = totalCliente + calculo;
        
    
    printf("Valor a pagar por este cliente: %.2f\n", totalCliente);
    return totalCliente; 
}

//Funcione para calcular el valor toral -------------------------------------------------------------------------------------------
void calcularValorRecaudado (int nrclientes, float *totalRecaudado){
    int i;
    for(i = 1; i <= nrclientes; i++) {
        printf("\n--- CLIENTE %i ---\n", i);
        
        // Llamar a funcion calcularValorCliente 
        *totalRecaudado = *totalRecaudado + calcularValorCliente(); // valor por referencia
    }
}
