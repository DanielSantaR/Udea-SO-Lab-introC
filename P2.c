#include <stdio.h>

void main(){
    int renglones;
    printf("Ingrese el número de reglones: ");
    scanf("%d",&renglones);
    int ctrl = 1;
    int imp = 1;
    while (ctrl != renglones + 1){
        imp = ctrl%2;
        for(int i = 1; i<= ctrl; i++){
            if(imp == 1){
                printf("%d", imp);
                imp = 0;
            }else{
                printf("%d", imp);
                imp = 1;
            }
        }
        ctrl = ctrl + 1;
        printf("\n");
    }
}