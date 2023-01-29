#include <iostream>

using namespace std;

int soma_recursiva(int valor){

    int resultado=1;

    if(valor<=0){
        return -1;
    }else{
       resultado=valor + soma_recursiva(valor-1);

    }


}

int soma_iterativa(int valor){

    int soma;
    int i;

    if(valor<=0){
        return -1;

    }else{
        for(i=1;i<=valor;i++){
           soma=soma+i;

        }
        return soma;

    }


}



int main()
{

    int numero;
    cout<<"Digite um valor N: ";
    cin>>numero;

    cout<<"\nA soma recursiva e: "<<soma_recursiva(numero)+1; //???

    cout<<"\nA soma iterativa e: "<<soma_iterativa(numero);


    cout << endl;
    return 0;
}
