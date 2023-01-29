#include <stdio.h>
#include <stdlib.h>

int main()
{
    double matriz[10][10];
    int i,j;
    double anterior=0,atual=1,proximo=0;

   /* printf("%d %d",anterior,atual);
for(i=0;i<10;i++){
        proximo=anterior+atual;
        anterior=atual;
        atual=proximo;
        printf("%d",proximo);
}
*/
    printf("|%.1f|\n |%.1lf|\n",anterior,atual);
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){

                proximo=anterior+atual;
                anterior=atual;
                atual=proximo;
                matriz[i][j]=proximo;

        }
    }

     //imprimir matriz
     for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("| %.1lf |\n",matriz[i][j]);
        }
        printf("\n\n");
    }








    printf("\n");
    return 0;
}
