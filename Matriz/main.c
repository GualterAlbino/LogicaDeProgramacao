#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[2][2];
    int i,j;
    int contador;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>10){
                contador++;
            }

        }
    }
    printf("\nExistem %d numeros maiores que zero. ",contador);
    printf("\n");
    return 0;
}
