#include "src\menu\menu.h"
#define MENUTEXT 6
#define REGISTERMENU 3
#define SEARCHMENU 3
#define SORTMENU 2
#define MAX_P 1000000
#define MAX_O 500000
#define MAX_E 2000000
#define MAX_R 4000000

// array menu
const std::string textMainMenu[MENUTEXT] = {"Cadastrar", "Ordenar", "Buscar", "Listar evidencias de uma ocorrencia", "Analisar ocorrencia", "Relatorio de desempenho"};
const std::string textRegisterMenu[REGISTERMENU] = {"Cadastrar Pessoas", "Cadastrar Ocorrencias", "Cadastrar Evidencias"};
const std::string textSearchMenu[SEARCHMENU] = {"Buscar Pessoas", "Buscar Ocorrencias"};
const std::string textSortMenu[SORTMENU] = {"Ordenar pessoas", "Ordenar ocorrencias"};
// global variable arrays, if you are gonna use them remember to add extern on the other files
int Amount_P = 0, Amount_O = 0, Amount_E = 0,Amount_R = 0, Usedinterconnection = 0;
Pessoa *listaPessoas = new Pessoa[Amount_P];
Ocorrencia *listaOcorrencias = new Ocorrencia[Amount_O];
Evidencia *listaEvidencias = new Evidencia[Amount_E];
relation *interconnection = new relation[Amount_R];

// functions 

void DeleteArrays()
{
    delete[] listaPessoas;
    delete[] listaOcorrencias;
    delete[] listaEvidencias;
    delete[] interconnection;
}

void menu()
{
    int totalCase, totalEvidence, totalPerson = 0;
    bool menuActive = true;
    while (menuActive)
    {
        printSeparator();
        std::cout << "\t\t\t\t\t MENU \n";
        printMenu(MENUTEXT, textMainMenu);
    }
}
void printMenu(int size, const std::string *textarray)
{
    printSeparator();
    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << "." << textarray[i] << '\n';
    }
    std::cout << "0. Encerrar programa\n";
    printSeparator();
    std::cout << "Digite a opção: ";
}
void printSeparator()
{
    for (int i = 0; i < 30; i++)
    {
        std::cout << '=';
    }
    std::cout << '\n';
}

void choiceMenu()
{
    int input = choiceInput(0, 11);
    printSeparator();
    switch (input)
    {
    case 1:
        subMenu(REGISTERMENU, textRegisterMenu, 0);
        break;
    case 2:
        subMenu(SORTMENU, textSortMenu, 1);
        break;
    case 3:
        subMenu(SEARCHMENU, textSearchMenu, 2);
        break;
    case 4:
        listEvidenceMenu();
        break;
    case 5:
        analyzeCaseMenu();
        break;
    case 6:

        break;
    case 0:
        return;
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
        std::cin >> choice;
        if (choice >= min && choice <= max)
        {
            checkifvalid = true;
        }
        else
        {
            std::cout << "Tente novamente.";
        }
    } while (!checkifvalid);
    return choice;
}
void subMenu(int size, const std::string *textarray, int type)
{
    int input;
    int subtype;
    switch (type)
    {
    case 0:
        std::cout<<"O que você quer cadastrar? \n";
        printMenu(size, textarray);
        subtype = choiceInput(0,3);
        switch (subtype)
        {
        case  0:
            return;
            break;
        case  1:
                cadastrandoPessoaManual(listaPessoas, Amount_P);
            break;
        case  2:
                cadastrandoOcorrenciaManual(listaOcorrencias, Amount_O);
            break;
        case  3:
                cadastrandoProvaManual(listaEvidencias, Amount_E);
            break;
        default:
            break;
        }
        break;
    case 1:
        std::cout<<"O que você quer ordenar? \n";
        printMenu(size, textarray);
        subtype = choiceInput(0,2);
        switch (subtype)
        {
        case  0:
            return;
            break;
        case  1:
                std::cout<<"Como você deseja ordenar? \n";
                std::cout<<"0 - ID \n";
                std::cout<<"1 - Nome \n";
                input = choiceInput(0,1);
                if (!input)
                {
                    sortpeople::sortById(listaPessoas, Amount_P);
                }
                else
                {
                    sortpeople::sortByName(listaPessoas, Amount_P);
                }
            break;
        case  2:
                std::cout<<"Como você deseja ordenar? \n";
                std::cout<<"0 - ID \n";
                std::cout<<"1 - Gravidade \n";
                input = choiceInput(0,1);
                if (!input)
                {
                    sortocc::sortById(listaOcorrencias, Amount_O);
                }
                else
                {
                    sortocc::sortBySeverity(listaOcorrencias, Amount_O);
                }
            break;
        default:
            break;
        }
        break;
    case 2:
        std::cout<<"O que você quer pequisar? \n";
        printMenu(SEARCHMENU, textSearchMenu);
        subtype = choiceInput(0,2);
        switch (subtype)
        {
        case  0:
            return;
            break;
        case  1:
                printP(listaPessoas, input, Amount_P);
            break;
        case  2:
                printO(listaOcorrencias, input, Amount_O);
        break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}

void listEvidenceMenu()
{
    std::cout<<"Digite o ID da ocorrencia, ou digite -1 para sair \n";
    int input;
    input = choiceInput(-1, Amount_O);
    if (input == -1)
    {
        return;
    }
    else
    {
      printCorrelation(interconnection, listaEvidencias, input, Amount_R);
    }
}

void analyzeCaseMenu()
{
    std::cout<<"Digite o ID da ocorrencia, ou digite -1 para sair \n";
    int input;
    input = choiceInput(-1, Amount_O);
    if (input == -1)
    {
        return;
    }
    else
    {
      analyzeCase(listaOcorrencias,Amount_O, input, interconnection, Amount_R);
    }
}