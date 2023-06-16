#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP
#include <nlohmann/json.hpp>

class FileManager{
    public:
        FileManager();
        ~FileManager();

        bool criarPasta(string caminho);
        bool deletarPasta(string caminho);

        bool deletarArquivo(string caminho);
        bool criarArquivo(string caminho);

        nlohmann::json lerArquivoJson(string caminho);
        nlohmann::json escreverArquivoJson(string caminho, nlohmann::json conteudo);
};

#endif