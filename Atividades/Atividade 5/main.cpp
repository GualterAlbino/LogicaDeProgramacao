#include <iostream>

using namespace std;

int busca_recursiva(int *vetor,int &valor, int inicio, int fim){



    while(inicio<=fim){
        int meio=((inicio+fim)/2);

        if(valor==vetor[meio]){
            return meio;

        }else if(valor<vetor[meio]){
            return busca_recursiva(vetor,valor,inicio,meio-1);

        }else if(valor>vetor[meio]){
            return busca_recursiva(vetor,valor,meio+1,fim);


        }else{
            return meio;
        }


    }return -1;//Não foi encontrado



}

int busca_iterativa(int *vetor,int &valor, int fim){

    int inicio=0;
    int meio = (inicio+fim)/2;

    while(inicio<=fim){
        if(valor==vetor[meio]){
            return meio;
        }else if(valor<vetor[meio]){
            fim=meio-1;

        }else if(valor>vetor[meio]){
            inicio=meio+1;
    }

        meio = (inicio+fim)/2;

    }return -1;

}



int main()
{
    int vetor[]={0,18,22,25,34,40,51,66,75,87};
    int valor;


    cout<<"Digite o numero a ser buscado: ";
    //cout<<"\n0,18,22,25,34,40,51,66,75,87\n";
    cin>>valor;

    cout<<"\nBusca Recursiva:";
    cout<<"\nPosicao: "<<busca_recursiva(vetor,valor,0,9);//0 pelo vetor sempre iniciar em 0 e 9 por ser um vetor de 10 posições.

    cout<<"\nBusca iterativa:";
    cout<<"\nPosicao: "<<busca_iterativa(vetor,valor,9);//Nesse caso eu preciso informar apenas o fim.




    cout<< endl;
    return 0;
}
