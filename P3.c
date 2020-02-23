#include <stdio.h>

int multiplo(int num1, int num2){
    if(num2%num1 == 0){
        return 1;
    }
    return 0;
}

void main(){
    int num1;
    int num2;
    while(1){
        printf("Ingrese el primer número (Para terminar el programa ponga 0): ");

        if(scanf("%d",&num1)==0){
            printf("Por favor ingrese un dato numérico");
            break;
        } 
        
        if(num1==0){
            break;
        }
        printf("Ingrese el segundo número: ");
        if(scanf("%d",&num2)== 0){
            printf("Por favor ingrese un dato numérico");
            break;
        } 
        printf("%d\n", multiplo(num1, num2));
    }
}