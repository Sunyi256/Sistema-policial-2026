#include "funcoes.h"
#define MENUTEXT 6
#define REGISTERMENU 3
#define SEARCHMENU 3
#define SORTMENU 2

// array menu
const std::string textMainMenu[MENUTEXT] = {"Cadastrar", "Buscar", "Ordenar", "Listar evidencias de uma ocorrencia", "Analisar ocorrencia", "Relatorio de desempenho"};
const std::string textRegisterMenu[REGISTERMENU] = {"Cadastrar Pessoas", "Cadastrar Ocorrencias", "Cadastrar Evidencias"};
const std::string textSearchMenu[SEARCHMENU] = {"Buscar Pessoas", "Buscar Ocorrencias", "Buscar Evidencias"};
const std::string textSortMenu[SORTMENU] = {"Ordenar pessoas", "Ordenar ocorrencias"};

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
void printMenu(int size, const string *textarray)
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
        subMenu(REGISTERMENU, textRegisterMenu);
        break;
    case 2:
        subMenu(SORTMENU, textSortMenu);
        break;
    case 3:
        subMenu(SEARCHMENU, textSearchMenu);
        break;
    case 4:

        break;
    case 5:

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
void subMenu(int size, const string *textarray)
{
    int input;
    printMenu(size, textarray);
    input = choiceInput(0, size);
}
