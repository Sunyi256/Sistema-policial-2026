#include "funcoes.h"
string textmenu[10] = {"Cadastrar Pessoas","Cadastrar Ocorrencias","Cadastrar Evidencias","Buscar Pessoas", "Buscar Ocorrencias", "Ordenar pessoas","Ordenar ocorrencias","Listar evidencias de uma ocorrencia","Analisar ocorrencia","Relatorio de desempenho"}
using namespace std;
void menu()
{
    int quantidadeEvidencias = 0;
    int quantidadeOcorrencias = 0;
    int quantidadePessoas = 0;

    while (true)
    {
        printMenu();
        choiceMenu();
        if (!(cin >> escolha) || escolha == 0)
        {
            return;
        }

        switch (escolha)
        {
        case 1:
        {
            cout << "1. Cadastrar Pessoas Aleatorias\n";
            cout << "2. Cadastrar Pessoa Manualmente\n";
            int escolha1;
            cin >> escolha1;
            switch (escolha1)
            {
            case 1:
            {
                int quantidade;
                cout << "Escolha a quantidade de pessoas a serem cadastradas: ";
                cin >> quantidade;
                if (quantidade < 0 || quantidade > MAX_PESSOAS - quantidadePessoas)
                {
                    cout << "Quantidade invalida.\n";
                    break;
                }
                cadastrandoPessoasAleatorias(quantidade, listaPessoas + quantidadePessoas);
                quantidadePessoas += quantidade;
                break;
            }
            case 2:
                cadastrandoPessoaManual(listaPessoas, quantidadePessoas);
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
                break;
            }
            break;
        }
        case 2:
        {
            cout << "1. Cadastrar Ocorrencias Aleatorias\n";
            cout << "2. Cadastrar Ocorrencia Manualmente\n";
            int escolha1;
            cin >> escolha1;
            switch (escolha1)
            {
            case 1:
            {
                int quantidade;
                cout << "Escolha a quantidade de ocorrencias a serem cadastradas: ";
                cin >> quantidade;
                if (quantidade < 0 || quantidade > MAX_OCORRENCIAS - quantidadeOcorrencias)
                {
                    cout << "Quantidade invalida.\n";
                    break;
                }
                cadastrandoOcorrenciaAleatoria(quantidade, listaOcorrencias + quantidadeOcorrencias);
                quantidadeOcorrencias += quantidade;
                break;
            }
            case 2:
                cadastrandoOcorrenciaManual(listaOcorrencias, quantidadeOcorrencias);
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
                break;
            }
            break;
        }
        case 3:
        {
            cout << "1. Cadastrar Evidencias Aleatorias\n";
            cout << "2. Cadastrar Evidencia Manualmente\n";
            int escolha1;
            cin >> escolha1;
            switch (escolha1)
            {
            case 1:
            {
                int quantidade;
                cout << "Escolha a quantidade de evidencias a serem cadastradas: ";
                cin >> quantidade;
                if (quantidade < 0 || quantidade > MAX_EVIDENCIAS - quantidadeEvidencias)
                {
                    cout << "Quantidade invalida.\n";
                    break;
                }
                cadastrandoEvidenciaAleatoria(quantidade, listaEvidencias + quantidadeEvidencias);
                quantidadeEvidencias += quantidade;
                break;
            }
            case 2:
                cadastrandoEvidenciaManual(listaEvidencias, quantidadeEvidencias);
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
                break;
            }
            break;
        }
        default:
            cout << "Opcao invalida. Tente novamente.\n";
            break;
        }
    }
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
    int input = choiceInput(0, 10);
    printSeparator();
    switch(input)
    {
        case 1:
            cout<<"1. Cadastro Manual"<<'\n';
            cout<<"2. Cadastro Automatico (DEV)"<<'\n';
            input = choiceInput(1,2);
            if(input==1)
            {

            }
            else
            {
                
            }

        break;
        case 2:

        break;
        case 3:

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