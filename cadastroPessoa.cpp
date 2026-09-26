#include "funcoes.h"
#include <limits>

void cadastrandoPessoasAleatorias(int quantidadePessoas, struct Pessoa listaPessoas[])
{
    string nomes[6] = {"Ana", "Bruno", "Carlos", "Diana", "Eduardo", "Fernanda"};
    string cidades[19] = {"Sao Paulo", "Rio de Janeiro", "Belo Horizonte", "Salvador", "Curitiba", "Porto Alegre", "Recife", "Fortaleza", "Brasilia", "Campinas", "Ribeirao Preto", "Juiz de Fora", "Joinville", "Londrina", "Blumenau", "Caxias do Sul", "Montes Claros", "Petrolina", "Uberlandia"};
    for (int i = 0; quantidadePessoas > i; i++)
    {
        string nomeEscolhido = nomes[rand() % 6];
        string cidadeEscolhida = cidades[rand() % 19];
        listaPessoas[i].id = i;
        stringParaChar(listaPessoas[i].nome, nomeEscolhido.c_str());
        listaPessoas[i].idade = rand() % 100;
        stringParaChar(listaPessoas[i].cidade, cidadeEscolhida.c_str());
    }
}

bool cadastrandoPessoaManual(struct Pessoa listaPessoas[], int &quantidadePessoas)
{
    if (quantidadePessoas == MAX_PESSOAS)
    {
        cout << "O limite de pessoas cadastradas foi atingido. Aceita apagar o dado mais antigo?\n1 - Sim\n2 - Nao\n";
        int escolha;
        cin >> escolha;
        if (escolha != 1)
        {
            cout << "Cadastro de pessoa cancelado.\n";
            return false;
        }
        for (int i = 0; i < MAX_PESSOAS - 1; i++)
        {
            listaPessoas[i] = listaPessoas[i + 1];
        }
    }

    int indice = quantidadePessoas < MAX_PESSOAS ? quantidadePessoas : MAX_PESSOAS - 1; // o operador ternário é usado para determinar o índice correto para a nova pessoa, dependendo se ainda há espaço no array ou se precisamos sobrescrever a última posição
    // em resumo, se quantidadePessoas < MAX_PESSOAS, então indice = quantidadePessoas, caso contrário, indice = MAX_PESSOAS - 1
    cout << "Digite o nome da pessoa: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Aiai, esse cin.ignore() é usado para limpar o buffer de entrada antes de ler a string do nome da pessoa. Isso é necessário porque, se houver algum caractere de nova linha ('\n') deixado no buffer de entrada (por exemplo, após a leitura de um número), ele será lido como a próxima entrada e causará problemas na leitura da string. O uso de cin.ignore() garante que o buffer esteja limpo antes de ler a string.
    string nome;
    getline(cin, nome);
    if (nome.size() >= sizeof(listaPessoas[indice].nome))
    {
        nome.resize(sizeof(listaPessoas[indice].nome) - 1); // resize é usado para garantir que o tamanho da string não exceda o tamanho do array de caracteres 'nome' na struct Pessoa. Se a string for maior, ela será truncada para caber no array.
    }
    cout << "Digite a idade da pessoa: ";
    int idade;
    cin >> idade;
    cout << "Digite a cidade da pessoa: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string cidade;
    getline(cin, cidade);
    if (cidade.size() >= sizeof(listaPessoas[indice].cidade))
    {
        cidade.resize(sizeof(listaPessoas[indice].cidade) - 1);
    }

    listaPessoas[indice].id = indice;
    listaPessoas[indice].idade = idade;
    stringParaChar(listaPessoas[indice].nome, nome.c_str());
    stringParaChar(listaPessoas[indice].cidade, cidade.c_str());
    if (quantidadePessoas < MAX_PESSOAS)
    {
        quantidadePessoas++;
    }
    cout << "Pessoa cadastrada com sucesso.\n";
    return true;
}