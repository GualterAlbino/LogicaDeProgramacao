#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vOpcao;
    int voperacao;
    int vnum1,vnum2;

    printf("\tMenu\n");
    printf(" 1-Soma\n 2-Subtracao\n 3-Divisao\n 4-Multiplicacao\n");
    scanf("%d",&vOpcao);

    switch(vOpcao){

    case 1:
    printf("Voce escolheu soma!\n");

    printf("Digite um numero: ");
    scanf("%d",&vnum1);

    printf("Digite outro numero: ");
    scanf("%d",&vnum2);

    voperacao= vnum1+vnum2;
    printf("A soma e de %d ",voperacao);
    break;

    case 2:

    printf("Voce escolheu subtracao!\n");

    printf("Digite um numero: ");
    scanf("%d",&vnum1);

    printf("Digite outro numero: ");
    scanf("%d",&vnum2);

    voperacao= vnum1-vnum2;
    printf("A subtracao e de %d ",voperacao);
    break;

    case 3:

    printf("Voce escolheu divisao!\n");

    printf("Digite um numero: ");
    scanf("%d",&vnum1);

    printf("Digite outro numero: ");
    scanf("%d",&vnum2);

    voperacao= vnum1/vnum2;
    printf("A divisao e de %d ",voperacao);
    break;

    case 4:
    printf("Voce escolheu multiplicacao!\n");

    printf("Digite um numero: ");
    scanf("%d",&vnum1);

    printf("Digite outro numero: ");
    scanf("%d",&vnum2);

    voperacao= vnum1*vnum2;
    printf("A multiplicacao e de %d ",voperacao);
    break;

    default:
        printf("Nao existe essa opcao!");
    break;
    }
    puts("\n\n");
    system("pause");
    //printf("\n\n\n\n");

    return 0;
}
