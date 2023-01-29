#include <iostream>

using namespace std;

int BuscaRecursiva(int *vetor,int &valor, int inicio, int fim){

    int meio=(inicio+fim)/2;

    if (inicio>fim){
        return -1;

    }else if(valor==vetor[meio]){
        return meio;

    }else if(valor<vetor[meio]){
        BuscaRecursiva(vetor,valor,inicio,meio-1);

    }else if(valor>vetor[meio]){
        BuscaRecursiva(vetor,valor,meio+1,fim);
    }


}


int main()
{
    int vetor[]={3,5,8,9,14,78,87};
    int valor;
    int inicio=0;
    int fim=6;

    cout<<"Digite o termo a ser buscado: ";
    cin>>valor;

    cout<<"A posicao e: "<<BuscaRecursiva(vetor,valor,inicio,fim);




    cout << endl;
    return 0;
}
