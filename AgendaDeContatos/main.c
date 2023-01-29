#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    int tel1;
    int tel2;
    char email[100];
} Contato;

//Criar variável GLOBAL
Contato vetBancoDeDados[100];
int vIndiceContatos = 0;


void menu(){
    printf("Agenda de contatos\n");
    printf("1 - Adicionar\n2 - Listar Todos\n3 - Pesquisar\n4 - Excluir\n5 - Sair\n\nOpcao: ");
}

void adicionar(){
    if (vIndiceContatos >= 100){
        printf("\n\nMemoria Cheia! Exclua outro contato para adicionar um novo contato!\n\n");
    }else{
        //algoritmo para adicionar um novo contato!
        printf("Digite o nome: ");
        fflush(stdin); gets(vetBancoDeDados[vIndiceContatos].nome);
        printf("Digite o Telefone 1: ");
        scanf("%d", &vetBancoDeDados[vIndiceContatos].tel1);
        printf("Digite o Telefone 2: ");
        scanf("%d", &vetBancoDeDados[vIndiceContatos].tel2);
        printf("Digite o email: ");
        fflush(stdin); gets(vetBancoDeDados[vIndiceContatos].email);

        vIndiceContatos++;
    }
}

void listarTodos(){
    printf("\n\nListar Todos:\n\n");
    int i;
    for (i = 0; i < vIndiceContatos; i++){
        printf("%d] %s - %d - %d - %s\n", i, vetBancoDeDados[i].nome,
                                           vetBancoDeDados[i].tel1,
                                           vetBancoDeDados[i].tel2,
                                           vetBancoDeDados[i].email);

    }
    if (vIndiceContatos == 0){
        printf("Nao existem Contatos na memoria!\n\n");
    }

}

void pesquisar(){
    printf("Pesquisar - Digite o parametro de busca por nome: ");
    char vParametroBusca[100];
    fflush(stdin); gets(vParametroBusca);
    int i;
    int vPirulito = 0; //não encontrei
    for (i = 0; i < vIndiceContatos; i++){
        if (strcasecmp(vParametroBusca, vetBancoDeDados[i].nome) == 0){
            vPirulito = 1; //Existe valor na busca
            printf("%d] %s - %d - %d - %s\n", i, vetBancoDeDados[i].nome,
                                                    vetBancoDeDados[i].tel1,
                                                    vetBancoDeDados[i].tel2,
                                                    vetBancoDeDados[i].email);
        }
    }
    if (vPirulito == 0){
        printf("Nao existem Contatos na memoria com o Parametro de Busca!\n\n");
    }
}

void excluir(){
    printf("Excluir - Digite o parametro de busca por nome: ");
    char vParametroBusca[100];
    fflush(stdin); gets(vParametroBusca);
    int i, m;
    int vPirulito = 0; //não encontrei
    for (i = 0; i < vIndiceContatos; i++){
        if (strcasecmp(vParametroBusca, vetBancoDeDados[i].nome) == 0){
            vPirulito = 1; //Existe valor na busca
            //Algoritmo para excluir
            if (i == vIndiceContatos - 1){
                //o ultimo elemento ou o unico?
                //implemento a primeira estragégia
                vIndiceContatos--;
                //vIndiceContatos = vIndiceContatos - 1;
                printf("Elemento Excluido com Sucesso!\n\n");
            }else{
                //segunda estratégia
                for (m = i; m < vIndiceContatos; m++){
                    vetBancoDeDados[m] = vetBancoDeDados[m+1];
                }

                vIndiceContatos--;
                printf("Elemento Excluido com Sucesso!\n\n");
            }
        }
    }
    if (vPirulito == 0){
        printf("Nao existem Contatos na memoria com o Parametro de Busca!\n\n");
    }
}



int main()
{
    int vOp;
    while(1){
        system("cls"); //limpar a tela
        menu();
        scanf("%d", &vOp);
        switch(vOp){
            case 1:
                adicionar();
                break;
            case 2:
                listarTodos();
                break;
            case 3:
                pesquisar();
                break;
            case 4:
                excluir();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Opcao invalida! Tente Novamente!\n\n");
                break;
        }
        system("pause");
    }
    printf("\n\n\n");
    return 0;
}
