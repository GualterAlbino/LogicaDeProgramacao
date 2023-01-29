#include <iostream>
#include <locale.h> //necessário para usar setlocale
#include "funcoes.h"

using namespace std;



int main()
{
    setlocale(LC_ALL, "Portuguese");//Permitir o uso de acentuação
    int i;
    int j;
    int linhas;
    int colunas;
    int op;

    char matriz[5][5]; ///Matriz que é alimentada pelo usuario
    int convertida[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};;///Matriz convertida de CHAR pra INT
    int chave[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};;   ///Matriz criada para criptografar
    int resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};;///Matriz criptografada
    int inversa[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};;///Matriz inversa para descriptografar


    menu();
    cin>>op;

    switch(op){

    case 1:
        system("cls");
        instrucao();
        main();
        break;


    case 2:
        system("cls");
        informa(linhas,colunas);///Função que captura o numero de linhas e colunas

        alimenta(linhas,colunas,matriz);///Função que alimenta a matriz

        converte(linhas, colunas, matriz,convertida);///Função que converte de CHAR para INT

        matriz_resultado(linhas,colunas,convertida,resultado);///Função que multiplica a matriz pela chave

        descripto(linhas,colunas,resultado);///Função para descriptografar

        break;

    case 3:
        exit(0);
        break;

    }


    system("pause");
    cout << endl;
    return 0;
}
