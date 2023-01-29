#include <iostream>
#include <math.h>

using namespace std;

float n1;//numero 1
int p1;  //potencia do numero 1
float n2;//numero 2
int p2;  //potencia do numero 2

float result1;         //calculos com n1 e n2
int result2;           //calculos com p1 e p2

int diferenca_expoente;//diferença entre os expoentes (adição e subtração)
float ajuste;          //ajustes feitos com a diferença dos expoentes (adição e subtração)


void menu(){

    cout<<"\t---Menu---\n\n";
    cout<<"\n1 - Soma";
    cout<<"\n2 - Subtracao";
    cout<<"\n3 - Divisao";
    cout<<"\n4 - Multiplicacao";
    cout<<"\n5 - Sobre";
    cout<<"\n6 - Sair";
    cout<<"\n\nEscolha uma das operacoes: ";

}

void sobre(){

    cout<<"\n\nO programa te solicitara primeiramente o numero, logo em seguida seu expoente";
    cout<<"\nDepois de informar ele te apresentara as informacoes da seguinte maneira: ";
    cout<<"\n\n\t\t| a x 10^b |";
    cout<<"\n\n\n\n";
}


double soma(){

    cout<<"Digite um numero: ";
    cin>>n1;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p1;
    cout<<"\nDigite outro numero: ";
    cin>>n2;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p2;

    if(p1==p2){
        result1=((n1)+(n2));

        cout<<"O resultado e "<<result1<<" x10^"<<p1;
        cout<<"\n\n\n";

    }else if (p1>p2){ //se as potencias forem  negativas
        diferenca_expoente=(p1)-(p2);
        ajuste=pow(n1,diferenca_expoente);
        result1=ajuste+n2;
        //cout<<diferenca_expoente;

        if(result1>=10){
            if(p1<p2){                 // se p1 menor que p2
                result1=result1/10;
                result2=p1+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p1;
                cout<<"\n\n\n";

            }else if(p1>p2){           // se p2 menor que p1
                result1=result1/10;
                result2=p2+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
            }

        }else if((result1>0 && result1<1)){
                result1=result1*10;
                result2=p1-1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
        }else{
            cout<<"O resultado e "<<result1<<" x10^"<<p2;
            cout<<"\n\n\n";
            }

    }else if (p1<p2){ //se as potencias forem  positivas
        diferenca_expoente=(p1)-(p2);
        ajuste=pow(p2,diferenca_expoente);
        result1=ajuste+n2;
        //cout<<diferenca_expoente;

        if(result1>=10){
            if(p1<p2){                 // se p1 menor que p2
                result1=result1/10;
                result2=p1+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p1;
                cout<<"\n\n\n";

            }else if(p1>p2){           // se p2 menor que p1
                result1=result1/10;
                result2=p2+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
            }

        }else if((result1>0 && result1<1)){
                result1=result1*10;
                result2=p1-1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
        }else{
            cout<<"O resultado e "<<result1<<" x10^"<<p2;
            cout<<"\n\n\n";
            }


    }
}//chave final do bloco

double subtracao(){

    cout<<"Digite um numero: ";
    cin>>n1;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p1;
    cout<<"\nDigite outro numero: ";
    cin>>n2;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p2;

    if(p1==p2){
        result1=((n1)-(n2));

        cout<<"O resultado e "<<result1<<" x10^"<<p1;
        cout<<"\n\n\n";

    }else if (p1>p2){ //se as potencias forem  negativas
        diferenca_expoente=(p1)-(p2);
        ajuste=pow(n1,diferenca_expoente);
        result1=ajuste-n2;
        //cout<<diferenca_expoente;

        if(result1>=10){
            if(p1<p2){                 // se p1 menor que p2
                result1=result1/10;
                result2=p1+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p1;
                cout<<"\n\n\n";

            }else if(p1>p2){           // se p2 menor que p1
                result1=result1/10;
                result2=p2+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
            }

        }else if((result1>0 && result1<1)){
                result1=result1*10;
                result2=p1-1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
        }else{
            cout<<"O resultado e "<<result1<<" x10^"<<p2;
            cout<<"\n\n\n";
            }

    }else if (p1<p2){ //se as potencias forem  positivas
        diferenca_expoente=(p1)-(p2);
        ajuste=pow(p2,diferenca_expoente);
        result1=ajuste-n2;
        //cout<<diferenca_expoente;

        if(result1>=10){
            if(p1<p2){                 // se p1 menor que p2
                result1=result1/10;
                result2=p1+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p1;
                cout<<"\n\n\n";

            }else if(p1>p2){           // se p2 menor que p1
                result1=result1/10;
                result2=p2+1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
            }

        }else if((result1>0 && result1<1)){
                result1=result1*10;
                result2=p1-1;
                cout<<"O resultado e "<<result1<<" x10^"<<p2;
                cout<<"\n\n\n";
        }else{
            cout<<"O resultado e "<<result1<<" x10^"<<p2;
            cout<<"\n\n\n";
            }


    }



}//chave final do bloco


double divisao(){

    cout<<"Digite um numero: ";
    cin>>n1;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p1;
    cout<<"\nDigite outro numero: ";
    cin>>n2;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p2;

    result1=(n1/n2);
    result2=((p1)-(p2));

    if((result1>0)&&(result1<1)){
        result2=result2-1;
        result1=result1*10;
        cout<<"\nO resultado e: "<<result1<<"x10^"<<result2;
        cout<<"\n\n\n";


    }else if(result1>=10){
        result2=result2+1;
        result1=result1/10;
        cout<<"\nO resultado e: "<<result1<<"x10^"<<result2;
        cout<<"\n\n\n";


    }else{
        cout<<"\nO resultado e: "<<result1<<"x10^"<<result2;
        cout<<"\n\n\n";
    }







}

double multiplicacao(){

    cout<<"Digite um numero: ";
    cin>>n1;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p1;
    cout<<"\nDigite outro numero: ";
    cin>>n2;
    cout<<"Digite a qual potencia este numero esta elevado: ";
    cin>>p2;

    result1=(n1*n2);
    result2=((p1)+(p2));

    if(result1>=10){
        result1=result1/10;
        result2=result2+1;

        cout<<"\nO resultado e: "<<result1<<"x10^"<<result2;
        cout<<"\n\n\n";

    }else if((result1>0)&&(result1<1)){
        result2=result2-1;
        result1=result1*10;
        cout<<"\nO resultado e: "<<result1<<"x10^"<<result2;
        cout<<"\n\n\n";

    }else{
        cout<<"\nO resultado e: "<<result1<<"x10^"<<result2;
        cout<<"\n\n\n";
    }




}




int main(){
    int op;
    while(1){
        system("cls");
        menu();
        cin>>op;
        switch(op){
            case 1:
                system("cls");
                soma();
                break;

            case 2:
                system("cls");
                subtracao();
                break;

            case 3:
                system("cls");
                divisao();
                break;
            case 4:
                system("cls");
                multiplicacao();
                break;
            case 5:
                system("cls");
                sobre();
                break;
            case 6:
                return 0;
            default:

                cout<<"\n\tSelecione uma opcao valida!\n\n\n";

        }
     system("pause");
    }
    cout<< endl;
    return 0;
}
