#include <iostream>
#include "funcoes.h"
#include <stdlib.h>


using namespace std;

void menu(){

    cout<<"\n\tMENU:\n\n";
    cout<<"\n1 - Instrução";
    cout<<"\n2 - Iniciar";
    cout<<"\n3 - Sair";
    cout<<"\n\nEscolha uma opção: ";

}


void instrucao(){

    cout<<"\n\t INSTRUÇÕES:\n";
    cout<<"\n1 - O programa solicitará o tamanho da matriz que corresponde ao número de letras presentes na frase.";
    cout<<"\n2 - Não poderá ultrapassar o limite máximo de 25 caracteres ";
    cout<<"\n3 - Cada espaço na matriz deve corresponder a somente 1 letra";
    cout<<"\n4 - Os espaçoes devem ser representados pelo - (hífen)";
    cout<<"\n\n\n";
    system("pause");
    system("cls");



}


int informa(int &linhas, int &colunas){

    int ordem;

    cout<<"Qual a ordem da matriz? "; ///Solicita o numero de linhas e faz a validação
    cin>>ordem;
    if (ordem > 5 || ordem ==1){
        cout<<"Erro! A matriz permite no máximo 5 linhas.\n\n\n";
        system("pause");
        system("cls");
        main();
    }


    linhas = ordem;
    colunas = ordem;




}


int alimenta(int linhas, int colunas,char matriz[][5]){


    int i;
    int j;

    cout<<"\n\tObservação: O espaço deve ser representado pelo simbolo:  -  \n\n";
    system("pause");
    system("cls");

    for(i = 0; i < linhas ; i++){
        for(j = 0; j< colunas; j++){

            cout<<"Digite a letra na posição ["<<i<<"] ["<<j<<"]: ";
            cin>>matriz[i][j];
            cout<<"\n";

            if((matriz[i][j] == '-') || (matriz[i][j])== ' '){

                    matriz[i][j]=48;

            }

        }
    }




}


int converte(int linhas, int colunas, char matriz[][5],int converte[5][5]){

    int i;
    int j;



    for(i=0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            converte[i][j] = matriz[i][j];
        }
    }

    ///Função que testa a conversão
    cout<<"Conversão para CHAR:\n\n";
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){

            cout<<"|"<<converte[i][j]<<"|";

        }

        cout<<"\n";
    }

    cout<<"\n";
    system("pause");
    system("cls");
    cout<<"\n\n";


}


int matriz_resultado(int linhas,int colunas,int convertida[][5],int resultado[][5]){



    int chave1[2][2]={{2,1},{5,3}};
    int chave2[3][3]={{1,2,3},{0,1,4},{0,0,1}};
    int chave3[4][4]={{1,2,0,1},{-1,-3,0,1},{3,6,1,3},{2,4,0,3}};
    int chave4[5][5]={{-3,-3,-4,0,1},{0,1,1,-4,1},{4,3,4,2,0},{1,1,0,-7,1},{1,2,3,0,-3}};


    //int chave[5][5]= {{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1}, {-1,-1,-1,-1,-1}, {-1,-1,-1,-1,-1}, {-1,-1,-1,-1,-1} } ;
    //int chave[5][5]= {{1,2,4,3,2},{1,1,3,2,3},{0,2,1,3,2},{0,0,1,0,3},{0,0,0,-1,-8}};

    char cripto[5][5];


    int i;
    int j;
    int inner ;

    if (linhas == 2){

        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    resultado[i][j] +=  convertida[i][inner] * chave1[inner][j];
                }
            }
        }

    }else if(linhas ==3 ){
        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    resultado[i][j] +=  convertida[i][inner] * chave2[inner][j];
                }
            }
        }


    }else if(linhas == 4){
        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    resultado[i][j] +=  convertida[i][inner] * chave3[inner][j];
                }
            }
        }



    }else if(linhas ==5){
        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    resultado[i][j] +=  convertida[i][inner] * chave4[inner][j];
                }
            }
        }

    }




    for(i=0;i<linhas;i++){ ///Transforma em CHAR novamente
        for(j=0; j<colunas ;j++){
            cripto[i][j] = resultado[i][j];


            }

        }

    cout<<"O resultado da multiplicação é: \n\n";
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            cout<<"|"<<resultado[i][j]<<"|";
        }
        cout<<"\n";

    }
    cout<<"\n\n";

    cout<<"A mensagem criptografada é: \n\n";
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            cout<<"|"<<cripto[i][j]<<"|";
        }
        cout<<"\n";

    }


    cout<<"\n\n";



}


int descripto(int linhas, int colunas,int resultado[][5]){


    int inversa1[2][2]={{3,-1},{-5,2}};
    int inversa2[3][3]={{1,-2,5},{0,1,-4},{0,0,1}};
    int inversa3[4][4]={{13,2,0,-5},{-5,-1,0,2},{-3,0,1,0},{-2,0,0,1}};
    int inversa4[5][5]={{-40,-9,-25,-2,-17},{170,36,107,10,72},{-97,-20,-61,-6,-41},{19,4,12,1,8},{3,1,2,0,1}};
    int descripto1[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};; ///Multiplicação pela inversa
    char descripto2[5][5];///De INT para CHAR

    int i;
    int j;
    int inner;



    if (linhas == 2){

        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    descripto1[i][j] +=  resultado[i][inner] * inversa1[inner][j];
                }
            }
        }

    }else if(linhas ==3 ){
        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    descripto1[i][j] +=  resultado[i][inner] * inversa2[inner][j];
                }
            }
        }


    }else if(linhas == 4){
        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    descripto1[i][j] +=  resultado[i][inner] * inversa3[inner][j];
                }
            }
        }



    }else if(linhas ==5){
        for(i=0;i<linhas;i++){
            for(j=0; j<colunas ;j++){
                for(inner = 0; inner < linhas; inner++){
                    descripto1[i][j] +=  resultado[i][inner] * inversa4[inner][j];
                }
            }
        }

    }



     for(i=0;i<linhas;i++){///Trasnforma em CHAR novamente
        for(j=0; j<colunas ;j++){

            descripto2[i][j] = descripto1[i][j];

        }
    }




    cout<<"O resultado da multiplicação da inversa é: \n\n";
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            cout<<"|"<<descripto1[i][j]<<"|";
        }
        cout<<"\n";

    }
    cout<<"\n\n";



    cout<<"\n\nA mensagem descriptografada é: \n\n";
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){

            if (descripto2[i][j] == '0'){
                descripto2[i][j] = '-';

            }
                cout<<"|"<<descripto2[i][j]<<"|";


        }
        cout<<"\n";
    }



}
