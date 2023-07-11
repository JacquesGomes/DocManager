#include "../../include/menu/Menu.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include <limits>
#include <vector>
#include <algorithm>

using namespace std;

/*========= Util ===========*/

bool comparaTarefas(Tarefa &tarefa1, Tarefa &tarefa2)
{
    return tarefa1.getPontuacaoPrioridade() < tarefa2.getPontuacaoPrioridade();
}

/*=========== Sorting ==========*/

void bubbleSort(vector<string> &vetor)
{
    int tamanho = vetor.size();

    for (int i = 0; i < tamanho - 1; ++i)
    {
        for (int j = 0; j < tamanho - i - 1; ++j)
        {
            if (vetor[j] > vetor[j + 1])
            {
                swap(vetor[j], vetor[j + 1]);
            }
        }
    }
}

void merge(vector<string> &vetor, int inicio, int meio, int fim)
{
    int tamanhoEsquerda = meio - inicio + 1;
    int tamanhoDireita = fim - meio;

    vector<string> esquerda(tamanhoEsquerda);
    vector<string> direita(tamanhoDireita);

    for (int i = 0; i < tamanhoEsquerda; ++i)
    {
        esquerda[i] = vetor[inicio + i];
    }

    for (int j = 0; j < tamanhoDireita; ++j)
    {
        direita[j] = vetor[meio + 1 + j];
    }

    int indiceEsquerda = 0;
    int indiceDireita = 0;
    int indiceMerge = inicio;

    while (indiceEsquerda < tamanhoEsquerda && indiceDireita < tamanhoDireita)
    {
        if (esquerda[indiceEsquerda] <= direita[indiceDireita])
        {
            vetor[indiceMerge] = esquerda[indiceEsquerda];
            ++indiceEsquerda;
        }
        else
        {
            vetor[indiceMerge] = direita[indiceDireita];
            ++indiceDireita;
        }
        ++indiceMerge;
    }

    // Copiar os elementos restantes da parte esquerda, se houver
    while (indiceEsquerda < tamanhoEsquerda)
    {
        vetor[indiceMerge] = esquerda[indiceEsquerda];
        ++indiceEsquerda;
        ++indiceMerge;
    }

    // Copiar os elementos restantes da parte direita, se houver
    while (indiceDireita < tamanhoDireita)
    {
        vetor[indiceMerge] = direita[indiceDireita];
        ++indiceDireita;
        ++indiceMerge;
    }
}

void mergeSort(vector<string> &vetor, int inicio, int fim)
{

    if (inicio < fim)
    {
        int meio = (inicio + fim) / 2;

        // Ordenar a metade esquerda
        mergeSort(vetor, inicio, meio);
        // Ordenar a metade direita
        mergeSort(vetor, meio + 1, fim);

        // Mesclar as metades ordenadas
        merge(vetor, inicio, meio, fim);
    }
}

/*============= Menus ==============*/

void Menu::imprimirMenuTasks(string user)
{

    int choice = 19;

    while (choice != 0)
    {
        cout << "\n<========= Menu de Tarefas =========>\n";
        cout << "\n1 - Criar arquivo\n2 - Imprimir arquivo pelo nome\n3 - Listar arquivos\n4 - Imprimir o conteúdo de todos os arquivos\n5 - Imprimir o conteúdo de todos os arquivos de acordo com a prioridade\n6 - Pesquisar arquivo por pontuação de prioridade\n7 - Ordenar nomes com BubbleSort\n8 - Ordenar nomes com MergeSort\n0 - Sair\n";

        cout << "\nDigite a opção desejada: ";
        cin >> choice;

        if (choice == 1)
        {

            Tarefa tarefinha;
            tarefinha.criar(user);
            string arquivo = tarefinha.getTitulo();

            FileManager manager;
            bool teste = manager.criarDiretorio(user);

            if (teste == false)
            {
                cout << "Erro ao criar/acessar o diretório do usuário";
            }
            else
            {
                tarefinha.salvarTask(arquivo, user);
            }
        }

        else if (choice == 2)
        {

            string arquivo;
            cout << "Insira o nome do arquivo: ";
            cin >> arquivo;

            FileManager manager;
            manager.imprimirArquivo(arquivo, user);
        }

        else if (choice == 3)
        {
            FileManager manager;
            manager.imprimirArquivosUser(user);
        }

        else if (choice == 4)
        {
            ListaEnc *lista = new ListaEnc();
            FileManager managers;
            managers.carregarArquivosUser(user, lista);
            lista->imprimirLista();
            delete lista;
        }

        else if (choice == 5)
        {
            Fila *fila = new Fila();
            FileManager managerF;
            managerF.carregarArquivosFila(user, fila);
            fila->imprimirFila();
            delete fila;
        }

        else if (choice == 6)
        {

            vector<Tarefa> tarefasV;
            FileManager managersVector;
            managersVector.carregarArquivosVector(user, tarefasV);
            sort(tarefasV.begin(), tarefasV.end(), comparaTarefas);
            BuscaBinaria busca(tarefasV);
            int valor;
            cout << "Insira o valor de prioridade que quer procurar: ";
            cin >> valor;
            bool encontrado = busca.buscaRecursiva(valor, 0, tarefasV.size() - 1);
            bool encontrado2 = busca.buscaIterativa(valor);
            if(!encontrado && !encontrado2){
                cout << "Valor não encontrado!\n";
            }
        }

        else if (choice == 7)
        {

            FileManager managerBubbleSort;
            vector<string> nomeArquivosBubble;
            managerBubbleSort.salvarNomesVector(user, nomeArquivosBubble);
            bubbleSort(nomeArquivosBubble);

            for (const auto &elemento : nomeArquivosBubble)
            {
                cout << elemento << " ";
            }
            cout << endl;
        }

        else if (choice == 8)
        {

            FileManager managerSort;
            vector<string> nomeArquivos;
            managerSort.salvarNomesVector(user, nomeArquivos);

            mergeSort(nomeArquivos, 0, nomeArquivos.size() - 1);

            for (const auto &elemento : nomeArquivos)
            {
                cout << elemento << " ";
            }
            cout << endl;
        }

        else
        {
            cout << "Opção inválida";
        }
    }
}

void Menu::imprimirMenuMain()
{

    int choice = 10;
    string username, password;
    UserAuthentication authentication;

    while (choice != 0)
    {
        cout << "\n<========= Menu Inicial =========>\n";
        cout << "\n1 - Login\n2 - Criar conta\n0 - Sair\n";
        cout << "\nDigite a opção desejada: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Digite seu nome: ";
            cin >> username;
            cout << "Digite sua senha: ";
            cin >> password;

            if (authentication.login(username, password))
            {
                cout << "\nSucesso no login!\n";
                if (choice == 1)
                {
                    imprimirMenuTasks(username);
                }
            }
            else
            {
                cout << "\nNome ou senha inválido.\n";
            }
        }
        else if (choice == 2)
        {
            cout << "Digite seu nome: ";
            cin >> username;
            cout << "Digite sua senha: ";
            cin >> password;

            authentication.criarUsuario(username, password);
            cout << "Conta criada com sucesso!\n";
        }
        else if (choice == 0)
        {
            cout << "Tchau tchau\n";
        }
        else
        {
            cout << "Opção inválida.\n";
        }
    }
}
