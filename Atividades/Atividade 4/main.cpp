#include <iostream>
#include <stdlib.h>

using namespace std;

void menu(){

    cout<<"\n\t---Menu---";
    cout<<"\n1 - Matriz transposta";
    cout<<"\n2 - Multiplicacao por fator K";
    cout<<"\n3 - Adicao de matrizes";

    cout<<"\n\nSelecione uma opcao: ";


}

int ler_matriz(int &linha,int &coluna,int parametro_matriz[20][25]){

    int i;
    int j;

    cout<<"Digite o numero de linhas: ";
    cin>>linha;
    cout<<"Digite o numero de colunas: ";
    cin>>coluna;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"\nDigite o valor na posicao" <<"["<<i<<"] "<<"["<<j<<"]: ";
            cin>>parametro_matriz[i][j];

        }
    }

}


int matriz_transposta(){

    int i;
    int j;
    int linha;
    int coluna;
    int matriz[20][25];
    int matriz_transposta[25][20];


    ler_matriz(linha,coluna,matriz);


    //IMPRESSÃO DA MATRIZ TRANSPOSTA
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz_transposta[i][j]=matriz[j][i];
        }
    }

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"| "<<matriz_transposta[i][j]<<" |\n";

        }
    }



}


int multiplicacao_por_k(){

    int linha;
    int coluna;
    int i;
    int j;
    int matriz[20][25];
    int matriz_multiplicada[20][25];
    int k;

    cout<<"\nDigite o fator K: ";
    cin>>k;

    ler_matriz(linha,coluna,matriz);

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz_multiplicada[i][j]=matriz[i][j]*k;
        }
    }

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"| "<<matriz_multiplicada[i][j]<<" |\n";
        }
    }



}


int soma(){

    int linha;
    int coluna;
    int i;
    int j;
    int matriz[20][25];//matriz recebida pela função
    int matriz2[20][25];//segunda matriz do problema
    int matriz_somada[20][25];//matriz que recebe a soma

    ler_matriz(linha,coluna,matriz);

    cout<<"\nInforme a segunda matriz: \n";
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"\nDigite o valor na posicao ["<<i<<"] "<<"["<<j<<"]: ";
            cin>>matriz2[i][j];


        }
    }

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz_somada[i][j]=(matriz[i][j]+matriz2[i][j]);
        }
    }


    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"| "<<matriz_somada[i][j]<<" |\n";

        }
    }

}

int main()
{


    while(1){
        int op;
        system("cls");
        menu();
        cin>>op;
    switch(op){

    case 1:
        system("cls");
        matriz_transposta();
        break;

    case 2:
        system("cls");
        multiplicacao_por_k();
        break;

    case 3:
        system("cls");
        soma();
        break;

    default:
        cout<<"Selecione uma opcao valida!\n\n";
        }
        system("pause");
    }


    // system(pause);


    cout << endl;
    return 0;
}
