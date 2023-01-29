#include <iostream>
#include <locale.h>


using namespace std;

float inequacao(){//Função para calcular a equação

    ///Equação de base: ax + b = 0

    float x;
    float a;
    float b;

    cout<<"Digite o coeficiente angular ( a ): ";
    cin>>a;

    cout<<"Digite o coeficiente linear ( b ): ";
    cin>>b;


    int op;
    cout<<"\n\Digite o número que possui uma opção correspondente";
    cout<<"\n1 - < ";
    cout<<"\n2 - > ";
    cout<<"\n3 - <= ";
    cout<<"\n4 - >= ";
    cout<<"\n\nSelecione uma opção: ";
    cin>>op;

    switch(op){

    case 1:
        system("cls");



    if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado é:  X > "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado é:  X > "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado é:  X < "<<x;
        cout<<"\n\n\n";
    }

        break;

    case 2:

        system("cls");

        if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado é:  X < "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado é:  X < "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado é:  X > "<<x;
        cout<<"\n\n\n";
    }



        break;

    case 3:
        system("cls");

        if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado é:  X >= "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado é:  X >= "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado é:  X =< "<<x;
        cout<<"\n\n\n";
    }


        break;

    case 4:
        system("cls");

        if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado é:  X =< "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado é:  X =< "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado é:  X >= "<<x;
        cout<<"\n\n\n";
    }


        break;

    default:
        system("cls");
        cout<<"\n\n\tSelecione uma opção valida!\n\n";
        system("pause");
        system("cls");
        inequacao();




    }

}

float equacao(){//Função para calcular a inequação


    ///Equação de base: ax + b = 0

    float x;
    float a;
    float b;

    cout<<"Digite o coeficiente angular ( a ): ";
    cin>>a;

    cout<<"Digite o coeficiente linear ( b ): ";
    cin>>b;

    if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado é: "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado é: "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado é: "<<x;
        cout<<"\n\n\n";

    }








}



void menu(){
    setlocale(LC_ALL, "Portuguese");

    cout<<"\t____";
    cout<<"\n\tMENU\n\n";
    cout<<"\n1 - Equação";
    cout<<"\n2 - Inequação";
    cout<<"\n3 - Sair";
    cout<<"\n\nSelecione uma opção: ";

}



int main()
{
    int op; //variavel de opção para uso do switch

    menu();
    cin>>op;

    switch(op){

        case 1:
            system("cls");
            equacao();
            break;


        case 2:
            system("cls");
            inequacao();
            break;

        case 3:
            system("cls");
            cout<<"\n\n\n";
            cout<<"Programa finalizado! ";
            cout<<"\n\n\n";
            exit(1);
            break;

        default:
            system("cls");
            cout<<"\n\n\tSelecione uma opção valida!\n\n";
            system("pause");
            system("cls");
            main();







    }















    cout << endl;
    return 0;
}
