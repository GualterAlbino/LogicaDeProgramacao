#include <iostream>
#include "funcoes.h"
#include <locale.h> //necess�rio para usar setlocale

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3];
    int DeterminanteGeral;
    int i;
    int j;

    alimenta(matriz);

    ///Fun��o que verifica as condi��es de existencia
    if( (verficacao1(matriz) == false) && (verificacao2(matriz,DeterminanteGeral) == false) ){
        main();

    }else{

        calculo(matriz,DeterminanteGeral);
    }


    cout<<"\n\n";
    cout << endl;
    return 0;
}
