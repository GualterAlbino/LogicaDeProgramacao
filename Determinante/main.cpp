#include <iostream>
#include "funcoes.h"
#include <locale.h> //necessário para usar setlocale

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3];
    int DeterminanteGeral;
    int i;
    int j;

    alimenta(matriz);

    ///Função que verifica as condições de existencia
    if( (verficacao1(matriz) == false) && (verificacao2(matriz,DeterminanteGeral) == false) ){
        main();

    }else{

        calculo(matriz,DeterminanteGeral);
    }


    cout<<"\n\n";
    cout << endl;
    return 0;
}
