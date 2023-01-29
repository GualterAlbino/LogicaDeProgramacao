#include <iostream>

using namespace std;

int fibonacci_iterativo(int n){//incorreto

    int anterior=0;
    int atual=1;
    int proximo=0;
    int i;

    if(n==1 || n==2){
        return 1;

        }else if(n==0){
            return 0;
    }else{

            for(i=0;i<=n;i++){
                proximo=anterior+atual;
                anterior=atual;
                atual=proximo;
            }
            return atual;

        }

    }




int f(int n){//Fibonacci recursivo

    int resultado;

    if (n==1 || n==2){
        return 1;
    }else if(n==0){
        return 0;
    }else{
        resultado=f(n-1)+f(n-2);
    }return resultado;


}

int main()
{
    int i;
    int posicao;
    cout<<"Digite a posicao que quer na seuqencia: ";
    cin>>posicao;


    cout<<"\nFibonacci recursivo: "<<f(posicao);

    cout<<"\nFibonacci iterativo: "<<fibonacci_iterativo(posicao);






    cout<< endl;
    return 0;
}
