#include <iostream>

using namespace std;

int conversor(int parametro_minutos,int &total_horas,int &total_minutos){

    total_horas=parametro_minutos/60; //total de horas
    total_minutos=parametro_minutos%60; //total de minutos


}




int main()
{
    int minutos;
    int convert_horas;
    int convert_minutos;

    cout<<"Quantos minutos: ";
    cin>>minutos;

    conversor(minutos,convert_horas,convert_minutos);

    cout<<"\nSao "<<convert_horas<<"h e "<<convert_minutos<<"min";





    cout << endl;
    return 0;
}
