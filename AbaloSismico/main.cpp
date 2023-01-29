#include <iostream>
#include <math.h>
#include <iomanip>
#include <sstream>

using namespace std;

float calcula_amplitude(float parametro_magnitude, float amplitude, float t, float &resultado){

    parametro_magnitude=log10(amplitude) + (3*(log10(8*t)))-2.92;
    resultado=parametro_magnitude;


    if (parametro_magnitude<3.5){

        cout<<"\nEfeito geralmente nao sentido, mas gravado";

    }else if(parametro_magnitude>3.5 && parametro_magnitude<=5.4 ){
        cout<<"\nEfeito sentindo mas raramente causa danos";

    }else if(parametro_magnitude>=5.5 && parametro_magnitude<=6.0){
        cout<<"\nEfeito no maximo causa danos pequenos danos a predios bem construidos, mas pode danificar seriamente casas mal construidas em regioes proximas";

    }else if(parametro_magnitude>=6.1 && parametro_magnitude<=6.9){
        cout<<"\nEfeito pode ser destrutivo em areas em torno de ate 100km do epicentro";

    }else if(parametro_magnitude>=7 && parametro_magnitude<=7.9){
        cout<<"\nEfeito de grande terremoto.Pode causar serios danos numa grande faixa";

    }else{
      cout<<"\nEnorme terremoto.Pode causar graves danos em muitas areas mesmo que estejam a centenas de quilometros.";

    }


}



float calcula_energia_liberada(float parametro_magnitude){

    float resultado1=0.0;
    float resultado2=0.0;
    float precisao;



    resultado1=((parametro_magnitude*3)/2);
    std::round(resultado1);

    resultado2=(pow(10,resultado1)*0.007);

    return resultado2;


}









int main()
{
    float magnitude; //magnitude
    float amplitude; //amplitude
    float t; //Delta de T (S - P??)
    float energia; //energia liberada = E inicial é 7 x 10^-3 = 0,007
    float resultado;

    cout<<"\nDigite a Amplitude: ";
    cin>>amplitude;
    cout<<"\n";
    cout<<"Digite a variacao de tempo (Distancia entre as ondas P e S): ";
    cin>>t;
    system("cls");

    cout<<"\n\n";
    cout<<"===============================================";
    calcula_amplitude(magnitude,amplitude,t,resultado);
    cout<<"\n\nA Magnitude e de: "<<resultado;

    cout<<"\n\nA energia liberada e de: "<<calcula_energia_liberada(resultado)<<" kWh";
    cout<<"\n==============================================";

    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << endl;
    return 0;
}
