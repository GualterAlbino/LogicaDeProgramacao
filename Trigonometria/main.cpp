#include <iostream>
#include <math.h>
#define PI 3.14159265

using namespace std;

int main()
{
    float distancia;
    float resultado1;//Resultado da primeira medida
    float resultado2;//Resultado da segunda medida

    float seno1;
    float seno2;
    float seno3;

    float angulo1;
    float angulo2;
    float angulo3;

    cout<<"\nInisira um valor de distancia: ";
    cin>>distancia;

    cout<<"\nDigite o valor de um dos angulos: ";
    cin>>angulo1;

    cout<<"\nDigite o valor de outros angulo: ";
    cin>>angulo2;

    angulo3= 180 - (angulo1 + angulo2);//Calcular o terceiro angulo

    ///Calcula o seno dos 3 angulos
    seno3 = sin (angulo3*PI/180);//Calcular o valor de SENO do angulo 3
    seno2 = sin (angulo2*PI/180);//Calcular o valor de SENO do angulo 2
    seno1 = sin (angulo1*PI/180);//Calcular o valor de SENO do angulo 1

    ///obtem o resultado de A - B
    resultado1=(distancia * seno3) / seno1;

    ///Obtem o resultado de A - C
    resultado2= (distancia * seno2) / seno1;

    cout<<"\n\nO terceiro angulo e : "<<angulo3;
    cout<<"\nA primeira medida e : "<<resultado1;
    cout<<"\nA segunda medida e : "<<resultado2;






    cout << endl;
    return 0;
}
