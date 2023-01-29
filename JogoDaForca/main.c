#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct{

    char palavra[100];
    char dica1[100];
    char dica2[100];
    char dica3[100];
    char dica4[100];

}palavras;

//variavel global
// palavras bancodepalavras[20];
 int indice=0;












void forca(){
    printf("\tJOGO DA FORCA\n");
    int chances=5;
    if(chances=5){
        printf(" ------------\n");
        printf(" |          |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("---");

    }else if(chances=4){
         printf(" -----------\n");
        printf(" |          |\n");
        printf(" |          0\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("---");




    }else if(chances=3){
        printf(" -----------\n");
        printf(" |          |\n");
        printf(" |          0\n");
        printf(" |          |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("---");




    }else if(chances=2){
        printf(" -----------\n");
        printf(" |          |\n");
        printf(" |          0  \n");
        printf(" |         /|\ \n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("---");




    }else if(chances=1){
         printf(" -----------\n");
        printf(" |          |\n");
        printf(" |          0   \n");
        printf(" |         /|\  \n");
        printf(" |           \  \n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("---");




    }else if(chances=0){
         printf(" -----------\n");
        printf(" |          |\n");
        printf(" |          0   \n");
        printf(" |         /|\  \n");
        printf(" |         / \  \n");
        printf(" |\n");
        printf(" |\n");
        printf(" |\n");
        printf("---");
        printf("\tENFORCADO!");

    }
}


int main(){
    int i;
    char letra;
    char palavra_sorteada[100]; //palavra secreta
        printf("Digite uma palavra: ");
        fflush(stdin); gets(palavra_sorteada);//obter palavra secreta
        printf("A palavra secreta e: %s\n",palavra_sorteada);
        printf("A palavra tem %i caracteres: \n",strlen(palavra_sorteada));
        //  for(i=0;i<strlen(palavra_sorteada);i++){
        //       printf("__ ");
        system("cls");

    char palavra_tela[100];//palavra que exibe na tela
    strcpy(palavra_tela,palavra_sorteada);//copia da sorteada pra que vai ser exibida
    printf("%s",palavra_tela);
        for(i=0;i<strlen(palavra_sorteada);i++){
            palavra_tela[i]='_';
        }

    int chances=5;
    while(1){
    forca(chances);
    printf("\n\tAdivinhe: ");
        for(i=0;i<strlen(palavra_tela);i++){
             printf("%c",palavra_tela[i]);
            // printf("___ ");
        }
    printf("\nLetra: ");
    scanf("%c",&letra);
    int verifica_erro=1;//1-sim 2-nao
        for(i=0;i<strlen(palavra_tela);i++){
           if(letra==palavra_sorteada[i]){
               // strcpy(palavra_tela,letra);
               palavra_sorteada[i]=letra;
               verifica_erro=0;
            }
        }
            if(verifica_erro==1){
                chances--;//diminui a vida
            }
            //verificar se o jogo acabou
            if(chances==0){
                break;
            }



       // }
    printf("\n\n\n");
}










    }

