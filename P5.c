#include <stdio.h>
#include <math.h>

int factorial (int x) {
    int res=1;
    for(int i=1; i<=x; i++){
        res*=i;
    }
    return res;
} 

int potencia(int a, int b){
        int result = 1;
        for (int i = 0; i < b; i++)
        {
                result = result * a;
        }
        return result;  

}

void main() {
    float x;
    float n;
    float res = 0;
    float pot = 0;

    printf("Ingrese el valor de X: ");
    scanf("%f", &x);
    printf("Ingrese el número de términos n: ");
    scanf("%f", &n);

    for(int i=0; i<n; i++){

        pot = potencia(x, i*2);

        if (i%2==0){
            res = res + (pot / factorial(i*2)); 
        }else{
            res = res - (pot / factorial(i*2)); 
        }
        
    }

    printf("Resultado: %f\n", res);
}