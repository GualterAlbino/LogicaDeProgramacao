#include <stdio.h>

#include <stdlib.h>



int main()

{

    int vValor,i;

    int vcontador=0;


    for(i=0; i<3; i++)

    {

        printf("\nDigite um valor: ");
        scanf("%d", &vValor);

        if(vValor>100 && vValor<200){

            vcontador++;
            printf("O valor digitado e maior que 100 e menor que 200");

        }

    }

    printf("\nA quantidade de numeros maiores que 100 e menores que 200 e: %d", vcontador);

    return 0;

}
