#include "funcoes.h"
using namespace std;
void menu()
{
    int quantidadeEvidencias = 0;
    int quantidadeOcorrencias = 0;
    int quantidadePessoas = 0;


}
void printMenu()
{
    printSeparator();
    cout<<"        MENU";
    printSeparator();
    for(int i = 0; i<10; i++)
    {
        cout << i+1 << "." << textmenu[i]<< '\n';
    }
    cout << "0. Encerrar programa\n";
    printSeparator();
    cout << "Digite a opção: ";
}
void printSeparator()
{
    for(int i = 0; i<30; i++)
    {
        cout<<'=';
    }
    cout<<'\n';
}

void choiceMenu()
{
    int input = choiceInput(0, 11);
    printSeparator();
    switch(input)
    {
        case 1:
            registerMenu(0);
        break;
        case 2:
            registerMenu(1);
        break;
        case 3:
            registerMenu(2);
        break;
        case 4:

        break;
        case 5:

        break;
        case 6:

        break;
        case 7:

        break;
        case 8:

        break;
        case 9:

        break;
        case 10:

        break;
        case 11:

        break; 
        case 0:
        
        break;
        default:
        break;
    }
}

int choiceInput(int min, int max)
{
    int choice;
    bool checkifvalid = false;
    do
    {
        cin>>choice;
        if(choice>=min && choice<=max)
        {
            checkifvalid = true;
        }
        else
        {
            cout<<"Tente novamente.";
        }
    } while(!checkifvalid);
    return choice;
}
void registerSubMenu(int type)
{
    int input;
    cout<<"1. Cadastro Manual"<<'\n';
    cout<<"2. Cadastro Automatico (DEV)"<<'\n';
    cout<<"0. Retornar"<<'\n';
    input = choiceInput(0,2);
    switch(input)
    {
        case 1:
            switch(type)
            {
                case 0:

                break;

                case 1:

                break;
                case 2:

                break;
            }
        break;
        case 2:
            switch(type)
            {
                case 0:

                break;

                case 1:
                
                break;
                case 2:

                break;
            }
        break;
        case 0:
            return;
        break;
        default:
    }
        
}