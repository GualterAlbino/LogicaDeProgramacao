#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vNome[60];
    int vPeso;
    printf("Digite o nome: ");
    gets(vNome);
    printf("\n\nBem Vindo %s! ", vNome);
    printf("\nPosicao de Memoria: %x", &vNome);
    printf("\n\n\nDigite o peso: ");
    scanf("%d", &vPeso);
    printf("\n\nSeu nome e %s e voce tem %d kg\n\n", vNome, vPeso);

    if (vPeso < 60){
        printf("Peso Pena\n\n");
    }else if ((vPeso >= 60) && (vPeso <= 80)){
        printf("Peso Medio\n\n");
    }else if ((vPeso > 80) && (vPeso < 100)){
        printf("Peso Pesado\n\n");
    }else{
        printf("Peso Saulo Gordo");
    }

    puts("\n\n");
    return 0;
}
