#include "menu.h"
#define MENUTEXT 5
#define REGISTERMENU 3
#define SEARCHMENU 3
#define SORTMENU 2

// array menu
const std::string textMainMenu[MENUTEXT] = {"Cadastrar", "Ordenar", "Buscar", "Listar evidencias de uma ocorrencia", "Analisar ocorrencia"};
const std::string textRegisterMenu[REGISTERMENU] = {"Cadastrar Pessoas", "Cadastrar Ocorrencias", "Cadastrar Evidencias"};
const std::string textSearchMenu[SEARCHMENU] = {"Buscar Pessoas", "Buscar Ocorrencias"};
const std::string textSortMenu[SORTMENU] = {"Ordenar pessoas", "Ordenar ocorrencias"};
// global variable arrays, if you are gonna use them remember to add extern on the other files
int Amount_P = 0, Amount_O = 0, Amount_E = 0, Amount_R = 0, Usedinterconnection = 0;
Pessoa *listaPessoas = new Pessoa[MAX_P];
Ocorrencia *listaOcorrencias = new Ocorrencia[MAX_O];
Evidencia *listaEvidencias = new Evidencia[MAX_E];
relation *interconnection = new relation[MAX_R];

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
        menuActive = choiceMenu();
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

bool choiceMenu()
{
    int input = choiceInput(0, MENUTEXT);
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
    case 0:
        return false;
        break;
    default:
        break;
    }
    return true;
}

int choiceInput(int min, int max)
{
    int choice;
    bool checkifvalid = false;
    do
    {
        if (!(std::cin >> choice))
        {
            if (std::cin.eof())
            {
                return 0;
            }
            std::cin.clear();
            choice = min - 1;
        }
        while (std::cin.get() != '\n' && std::cin)
        {
        }
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
        std::cout << "O que você quer cadastrar? \n";
        printMenu(size, textarray);
        subtype = choiceInput(0, 3);
        switch (subtype)
        {
        case 0:
            return;
            break;
        case 1:
            cadastrandoPessoaManual(listaPessoas, Amount_P);
            break;
        case 2:
            cadastrandoOcorrenciaManual(listaOcorrencias, Amount_O);
            break;
        case 3:
            cadastrandoEvidenciaManual(listaEvidencias, Amount_E, listaOcorrencias, Amount_O);
            break;
        default:
            break;
        }
        break;
    case 1:
        std::cout << "O que você quer ordenar? \n";
        printMenu(size, textarray);
        subtype = choiceInput(0, 2);
        switch (subtype)
        {
        case 0:
            return;
            break;
        case 1:
            std::cout << "Como você deseja ordenar? \n";
            std::cout << "0 - ID \n";
            std::cout << "1 - Nome \n";
            input = choiceInput(0, 1);
            if (!input)
            {
                sortById(listaPessoas, Amount_P);
            }
            else
            {
                sortByName(listaPessoas, Amount_P);
            }
            break;
        case 2:
            std::cout << "Como você deseja ordenar? \n";
            std::cout << "0 - ID \n";
            std::cout << "1 - Gravidade \n";
            input = choiceInput(0, 1);
            if (!input)
            {
                sortById(listaOcorrencias, Amount_O);
            }
            else
            {
                sortBySeverity(listaOcorrencias, Amount_O);
            }
            break;
        default:
            break;
        }
        break;
    case 2:
        std::cout << "O que você quer pequisar? \n";
        printMenu(SEARCHMENU, textSearchMenu);
        subtype = choiceInput(0, 2);
        switch (subtype)
        {
        case 0:
            return;
            break;
        case 1:
            std::cout << "Digite o ID da pessoa: " << std::endl;
            input = choiceInput(0, 2000000000);
            printP(listaPessoas, input, Amount_P);
            break;
        case 2:
            std::cout << "Digite o ID da ocorrencia: " << std::endl;
            input = choiceInput(0, 2000000000);
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
    std::cout << "Digite o ID da ocorrencia, ou digite -1 para sair \n";
    int input;
    input = choiceInput(-1, Amount_O);
    if (input == -1)
    {
        return;
    }
    else
    {
        printCorrelation(interconnection, listaEvidencias, input, Usedinterconnection);
    }
}

void analyzeCaseMenu()
{
    std::cout << "Digite o ID da ocorrencia, ou digite -1 para sair \n";
    int input;
    input = choiceInput(-1, Amount_O);
    if (input == -1)
    {
        return;
    }
    else
    {
        analyzeCase(listaOcorrencias, Amount_O, input, interconnection, Usedinterconnection);
    }
}