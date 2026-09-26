#include "funcoes.h"

using namespace std;
void menu()
{
    int escolha;
    int quantidadeEvidencias = 0;
    int quantidadeOcorrencias = 0;
    int quantidadePessoas = 0;

    while (true)
    {
        cout << "1. Cadastrar Pessoas\n";
        cout << "2. Cadastrar Ocorrencias\n";
        cout << "3. Cadastrar Evidencias\n";
        cout << "4. Buscar Pessoas\n";
        cout << "5. Buscar Ocorrencias\n";
        cout << "6 - Ordenar pessoas\n";
        cout << "7 - Ordenar ocorrencias\n";
        cout << "8 - Listar evidencias de uma ocorrencia\n";
        cout << "9 - Analisar ocorrencia\n";
        cout << "10 - Relatorio de desempenho\n";
        cout << "0 - Encerrar programa\n";
        cout << "Escolha uma opcao: ";
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
