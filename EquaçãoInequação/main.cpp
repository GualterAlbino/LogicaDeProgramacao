#include <iostream>
#include <locale.h>


using namespace std;

float inequacao(){//Fun��o para calcular a equa��o

    ///Equa��o de base: ax + b = 0

    float x;
    float a;
    float b;

    cout<<"Digite o coeficiente angular ( a ): ";
    cin>>a;

    cout<<"Digite o coeficiente linear ( b ): ";
    cin>>b;


    int op;
    cout<<"\n\Digite o n�mero que possui uma op��o correspondente";
    cout<<"\n1 - < ";
    cout<<"\n2 - > ";
    cout<<"\n3 - <= ";
    cout<<"\n4 - >= ";
    cout<<"\n\nSelecione uma op��o: ";
    cin>>op;

    switch(op){

    case 1:
        system("cls");



    if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado �:  X > "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado �:  X > "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado �:  X < "<<x;
        cout<<"\n\n\n";
    }

        break;

    case 2:

        system("cls");

        if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado �:  X < "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado �:  X < "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado �:  X > "<<x;
        cout<<"\n\n\n";
    }



        break;

    case 3:
        system("cls");

        if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado �:  X >= "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado �:  X >= "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado �:  X =< "<<x;
        cout<<"\n\n\n";
    }


        break;

    case 4:
        system("cls");

        if (a < 0){

        b = b * -1;

        x=b/a;

        cout<<"\n";
        cout<<"O resultado �:  X =< "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado �:  X =< "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado �:  X >= "<<x;
        cout<<"\n\n\n";
    }


        break;

    default:
        system("cls");
        cout<<"\n\n\tSelecione uma op��o valida!\n\n";
        system("pause");
        system("cls");
        inequacao();




    }

}

float equacao(){//Fun��o para calcular a inequa��o


    ///Equa��o de base: ax + b = 0

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
        cout<<"O resultado �: "<<x;
        cout<<"\n\n\n";

   }else if(a > 0){

        x=(b/a)*-1;

        //x= x * -1;

        cout<<"\n";
        cout<<"O resultado �: "<<x;
        cout<<"\n\n\n";

    }else if(a == 0){

        x=0;
        cout<<"\n";
        cout<<"O resultado �: "<<x;
        cout<<"\n\n\n";

    }








}



void menu(){
    setlocale(LC_ALL, "Portuguese");

    cout<<"\t____";
    cout<<"\n\tMENU\n\n";
    cout<<"\n1 - Equa��o";
    cout<<"\n2 - Inequa��o";
    cout<<"\n3 - Sair";
    cout<<"\n\nSelecione uma op��o: ";

}



int main()
{
    int op; //variavel de op��o para uso do switch

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
            cout<<"\n\n\tSelecione uma op��o valida!\n\n";
            system("pause");
            system("cls");
            main();







    }















    cout << endl;
    return 0;
}
