#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include "../sorting/ListaEnc.hpp"
#include "../sorting/Fila.hpp"

#include <string>
#include <filesystem>
using namespace std;

class FileManager{
    public:
        bool criarDiretorio(string username);
        bool imprimirArquivo(string nome, string username);
        void imprimirArquivosUser(string username);
        void carregarArquivosUser(string username, ListaEnc* &lista);
        void carregarArquivosFila(string username, Fila* &lista);
};

#endif