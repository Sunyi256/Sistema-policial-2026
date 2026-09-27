#include "funcoes.h"
#include <limits>

void cadastrandoEvidenciaAleatoria(int quantidadeEvidencias, struct Evidencia listaEvidencias[])

{
    string descricoes[9] = {"arma do crime", "carta de ameaça", "câmera de segurança", "impressão digital", "testemunha ocular", "vídeo de celular", "arma de fogo", "arma branca", "objeto suspeito"};
    for (int i = 0; quantidadeEvidencias > i; i++)
    {
        string descricaoEscolhida = descricoes[rand() % 9];
        listaEvidencias[i].id = i;
        stringParaChar(listaEvidencias[i].descricao, descricaoEscolhida.c_str());
        listaEvidencias[i].idOcorrencia = rand() % quantidadeEvidencias;
    }
}

bool cadastrandoEvidenciaManual(struct Evidencia listaEvidencias[], int &quantidadeEvidencias) // usamos referência para quantidadeEvidencias para que a função possa modificar o valor da variável original
{
    if (quantidadeEvidencias == MAX_EVIDENCIAS)
    {
        cout << "O limite de evidencias cadastradas foi atingido. Aceita apagar o dado mais antigo?\n1 - Sim\n2 - Nao\n";
        int escolha;
        cin >> escolha;
        if (escolha != 1)
        {
            cout << "Cadastro de evidencia cancelado.\n";
            return false;
        }
        for (int i = 0; i < MAX_EVIDENCIAS - 1; i++)
        {
            listaEvidencias[i] = listaEvidencias[i + 1];
        }
    }

    int indice = quantidadeEvidencias < MAX_EVIDENCIAS ? quantidadeEvidencias : MAX_EVIDENCIAS - 1;
    cout << "Digite a descricao da evidencia: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // cin.ignore() é usado para limpar o buffer de entrada antes de ler a linha de descrição, evitando que caracteres  interfiram na leitura
    string descricao;
    getline(cin, descricao);                                           // getline() é usado para ler a linha inteira de descrição, permitindo que espaços sejam incluídos na descrição
    if (descricao.size() >= sizeof(listaEvidencias[indice].descricao)) // verificamos se a descrição digitada é maior que o tamanho do array de char.
    {
        descricao.resize(sizeof(listaEvidencias[indice].descricao) - 1); // se for maior, redimensionamos a string para o tamanho máximo permitido por meio de o método resize(), garantindo que não ocorra estouro de buffer ao copiar a string para o array de char.
    }
    cout << "Digite o id da ocorrencia relacionada a esta evidencia: ";
    int idOcorrencia;
    cin >> idOcorrencia;

    listaEvidencias[indice].id = indice;
    listaEvidencias[indice].idOcorrencia = idOcorrencia;
    stringParaChar(listaEvidencias[indice].descricao, descricao.c_str()); // usamos .c_str() para converter a string em um ponteiro para o primeiro caractere da descrição.
    if (quantidadeEvidencias < MAX_EVIDENCIAS)
    {
        quantidadeEvidencias++;
    }
    cout << "Evidencia cadastrada com sucesso.\n";
    return true;
}