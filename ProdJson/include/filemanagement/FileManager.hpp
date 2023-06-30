#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include "../sorting/ListaEnc.hpp"

#include <string>
#include <filesystem>
using namespace std;

class FileManager{
    public:
        bool criarDiretorio(string username);
        bool imprimirArquivo(string nome, string username);
        void imprimirArquivosUser(string username);
        ListaEnc* carregarArquivosUser(string username);
};

#endif