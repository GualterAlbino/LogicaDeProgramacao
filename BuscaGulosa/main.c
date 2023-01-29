#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][2];
    int i,j;
    int busca;

    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);

        }
    }
    printf("\n\n\nBusca na Matriz!\n\n\n");
    printf("Digite o termo a ser buscado: ");
    scanf("%d",&busca);

    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            if(busca==matriz[i][j]){
                printf("Encontrou na posicao[%d][%d]",i,j);
                }else{
                    printf("Nada foi encontrado!\n\n");
                }
            }
        }



    printf("\n");
    return 0;
}
