#include <iostream>
#include <locale.h>
#include "Funcoes.h"

using namespace std;


void menu(){

    cout<<"\n\t\tMENU";
    cout<<"\n1 - Tabela com os valores do intervalo de tempo.";
    cout<<"\n2 - Tempo necessario para atingir a temperatura informada";
    cout<<"\n\nSelecione: ";

}



int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Ta;///Temperatura ambiente constante
    float T1;///Tempo inicial
    float T2;///Tempo final
    float T;///Temperatura em Celsius
    int op;//Variavel para o menu

    cout<<"\n";
    cout<<"Digite a temperatura ambiente constante (Ta): ";
    cin>>Ta;

    cout<<"Digite o tempo inicial (t1): ";
    cin>>T1;

    cout<<"Digite o tempo final (t2): ";
    cin>>T2;

    if (T1>T2){
        cout<<"\n\nTempo inicial não pode ser maior que o tempo final!\n\n";
        system("pause");
        exit (-1);
    }

    cout<<"Digite a temperatura (T): ";
    cin>>T;

    system("pause");
    system("cls");
    menu();
    cin>>op;
    switch(op){

    case 1:
        system("cls");
        tabela(Ta,T1,T2);
        break;

    case 2:
        system("cls");
        temperatura(Ta,T1,T2,T);
        break;

    default:
        system("cls");
        cout<<"\n\n\n\tOpção invalida!";
        exit(0);


    }





    cout<<"\n\n\n";

    return 0;
}
