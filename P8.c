#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()
#include <stdbool.h>

int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
void mensaje(bool bandera);

void main(){

    int num_1, num_2, respuesta, resultado;
    srand(time(NULL));

    while(1){

        num_1 = generar_aleatorios(1,10);
        num_2 = generar_aleatorios(1,10);
        resultado = num_1 * num_2;

        printf("¿Cuánto es %d veces %d? (Para acabar la ejecución ingrese 0): ", num_1, num_2);
        scanf("%d", &respuesta);

        if (respuesta==0)
        {       
            break;
        }

        while(resultado != respuesta){
            mensaje(false);
            printf("¿Cuánto es %d veces %d? (Para acabar la ejecución ingrese 0): ", num_1, num_2);
            scanf("%d", &respuesta);

            if (respuesta==0){       
                break;
            }
        }
        if (respuesta==0){
            break;
        }
        mensaje(true);
    }

}


void mensaje(bool bandera){
    int msg = generar_aleatorios(1,4);
    if (bandera) {
        switch (msg)
        {
        case 1:
            printf("\nMuy bien!\n");
            break;

        case 2:
            printf("\nExcelente!\n");
            break;

        case 3:
            printf("\nBuen trabajo!\n");
            break;
            
        case 4:
            printf("\nSigue haciéndolo bien!\n");
            break;
        
        default:
            break;
        }
    } else {
        switch (msg)
        {
        case 1:
            printf("\nNo. Por favor trata de nuevo.\n");
            break;

        case 2:
            printf("\nIncorrecto. Trata una vez más.\n");
            break;

        case 3:
            printf("\nNo te rindas!\n");
            break;
            
        case 4:
            printf("\nNo. Trata de nuevo\n");
            break;
        
        default:
            break;
        }
    }
}

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}