/**
 * @file FileManager.hpp
 * @brief Assinatura da classe que gerencia os arquivos e interage com diretórios
*/

#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include "../sorting/ListaEnc.hpp"
#include "../sorting/Fila.hpp"

#include <string>
#include <filesystem>
using namespace std;

class FileManager{
    public:

    /*=========== Métodos básicos ==========*/
        bool criarDiretorio(string username);
        bool imprimirArquivo(string nome, string username);
        void imprimirArquivosUser(string username);


    /*=========== Métodos com estruturas de dados ==========*/
        void carregarArquivosUser(string username, ListaEnc* &lista);
        void carregarArquivosFila(string username, Fila* &lista);
        void carregarArquivosVector(string user, vector<Tarefa>& tarefas);
        void salvarNomesVector(string username, vector<string>& arr);
};

#endif