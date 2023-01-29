#include <iostream>
#include <locale.h>
#include "Funcoes.h"
#include <math.h>
#include <cmath>
#include <tgmath.h>

using namespace std;

float tabela(float Ta,float T1,float T2){

    float resultado=0.0;
    float intermediaria=0.000000;
    cout<<"\n\n";
    while(T1 < T2){

        intermediaria=(-1 * T1)/90;
        resultado= Ta + (54 * (pow(3,intermediaria)));

        cout<<"Com t1 valendo ["<<T1<<"] :"<<resultado<<"\n\n";

        T1= T1 + 0.1;

    }
    cout<<"\n";
}




float temperatura(float Ta,float T1,float T2,float T){

    double resultado=0.0;
    float intermediaria=0.0;
    cout<<"\n\n";

    intermediaria = (T - Ta) / 54;

    resultado = -90 * (log(intermediaria)/log(3));



    cout<<"O tempo necessario para atingir a temperatura informada é: " << resultado;

    cout<<"\n";


}
