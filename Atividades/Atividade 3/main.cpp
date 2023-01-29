#include <iostream>

using namespace std;

int conversao(int parametro_tempo,int &convert_horas,int &convert_minutos,int &convert_segundos){

    convert_horas=parametro_tempo/3600;
    convert_minutos=(parametro_tempo%3600)/60;
    convert_segundos=parametro_tempo%60;



}






int main()
{
    int tempo,result_horas,result_minutos,result_segundos;

    cout<<"Digite o tempo em segundos: ";
    cin>>tempo;

    conversao(tempo,result_horas,result_minutos,result_segundos);

    cout<<"\nTemos: "<<result_horas<<"h "<<result_minutos<<"min "<<result_segundos<<"s ";









    cout << endl;
    return 0;
}
