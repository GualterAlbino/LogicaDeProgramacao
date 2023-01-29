#include <iostream>

using namespace std;

int tempo(int total_dias,int &anos, int &meses,int &dias){


    anos=total_dias/365;            //formulas para descobrir o que se é necessario
    meses=(total_dias%365)/30;
    dias=(total_dias%365)%30;

}



int main()
{
    int dias,total_dias, total_meses, total_anos;

    cout<<"Informe seu tempo de vida em dias: ";
    cin>>dias;

    tempo(dias,total_anos,total_meses, total_dias); //Passagem por valor, e as outras por referencia.

    cout<<"\nO total em anos e: "<<total_anos;
    cout<<"\nO total em meses e: "<<total_meses;
    cout<<"\nO total em dias e: "<<total_dias;


    cout << endl;
    return 0;
}
