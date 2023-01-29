#include <iostream>
#include "funcoes.h"
#include <locale.h> //necess�rio para usar setlocale

using namespace std;

int alimenta(int matriz[][3]){///Fun��o que alimentaa matriz

    int i;
    int j;

    cout<<"\n\tAlimente a matriz sem os termos independentes:\n\n";
    system("pause");

    for(i=0; i<3 ; i++){
        for(j=0 ; j<3 ;j++){
            cout<<"Digite o valor da posi��o ["<<i<<"] ["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    return matriz[3][3];

}



bool verficacao1(int matriz[][3]){ ///Verifica se o numero de icognitas � igual ao de equa��es(Se algo � igual a 0)

    int i;
    int j;
    bool verifica;

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){

            if(matriz[i][j] == 0){
                system("cls");
                cout<<"\nERRO! N�o atende a condi��o de ser uma equa��o linear";
                system("pause");
                return false;
            }
        }
    }

}



bool verificacao2(int matriz[][3],int &DeterminanteGeral){///Verifica se o determinante da matriz � igual a zero



    DeterminanteGeral = ((matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1]
    * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]))
    - ((matriz[2][0] * matriz[1][1] * matriz[0][2]) + (matriz[2][1]
    * matriz[1][2] * matriz[0][0]) + (matriz[2][2] * matriz[1][0] * matriz[0][1]));

   cout<<"\nO determinante geral �: "<<DeterminanteGeral;

   if(DeterminanteGeral == 0){
        system("cls");
        cout<<"\nERRO!O determinante n�o pode ser igual a 0\n";
        system("pause");
        return false;
   }

}



float calculo(int matriz[][3],int &DeterminanteGeral){

    int termosIndependentes[3][1];
    int i;
    int j;

    float determinante1;
    float determinante2;
    float determinante3;

    cout<<"\n\nAgora digite os termos independentes:\n\n";
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<1 ;j++){
            cout<<"Digite o valor da posi��o ["<<i<<"] ["<<j<<"]: ";
            cin>>termosIndependentes[i][j];
        }
    }

    DeterminanteGeral = ((matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1]
    * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]))
    - ((matriz[2][0] * matriz[1][1] * matriz[0][2]) + (matriz[2][1]
    * matriz[1][2] * matriz[0][0]) + (matriz[2][2] * matriz[1][0] * matriz[0][1]));


    cout<<"\n\nO Determinante geral �:  "<<DeterminanteGeral<<"\n\n";

    ///Determinante1
    determinante1 = ((termosIndependentes[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1]
    * matriz[1][2] * termosIndependentes[2][0]) + (matriz[0][2] * termosIndependentes[1][0] * matriz[2][1]))///DIAGONAL PRINCIPAL
    - ((termosIndependentes[2][0] * matriz[1][1] * matriz[0][2]) + (matriz[2][1]///dIAGONAL SECUNDARIA
    * matriz[1][2] * termosIndependentes[0][0]) + (matriz[2][2] * termosIndependentes[1][0] * matriz[0][1]));

    cout<<"\nO valor de Dxj1 �: "<<determinante1;
    determinante1 = determinante1 / DeterminanteGeral;
    cout<<"\nO valor da primeira icognita �: "<<determinante1<<"\n";



    ///Determinante2

    determinante2 = ( (matriz[0][0] * termosIndependentes[1][0] * matriz[2][2]) + (termosIndependentes[0][0] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * termosIndependentes[2][0]) )///Diagonal principal
    - ( (matriz[2][0] * termosIndependentes[1][0] * matriz[0][2]) + (termosIndependentes[2][0] * matriz[1][2] * matriz[0][0]) + (matriz[2][2] * matriz[1][0] * termosIndependentes[0][0]) ); ///Diagonal secundaria

    cout<<"\nO valor de Dxj2 �: "<<determinante2;
    determinante2 = determinante2 / DeterminanteGeral;
    cout<<"\nO valor da segunda icognita �: "<<determinante2<<"\n";



     ///Determinante3

    determinante3 = ( (matriz[0][0] * matriz[1][1] * termosIndependentes[2][0]) + (matriz[0][1]
    * termosIndependentes[1][0] * matriz[2][0]) + (termosIndependentes[1][0] * matriz[1][0] * matriz[2][1]) )
    -
    ((termosIndependentes[0][0] * matriz[1][1] * matriz[2][0]) + (matriz[0][0]
    * termosIndependentes[1][0] * matriz[2][1]) + (matriz[0][1] * matriz[1][0] * termosIndependentes[2][0]) );

    cout<<"\nO valor de Dxj3 �: "<<determinante3;
    determinante3 = determinante3 / DeterminanteGeral;
    cout<<"\nO valor da terceira icognita �: "<<determinante3<<"\n";






}
