#include <string>
#include <fstream>
#include <iostream>
#include <limits>
#include <unistd.h>
#include <filesystem>
#include <cstdint>
#include "../../include/filemanagement/FileManager.hpp"

using namespace std;

bool FileManager::criarDiretorio(string user){

    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));
    string path = currentDir;
    path = path + "/data/tasks/" + user;

        // Check if directory exists and create it if it doesn't
    if (!filesystem::exists(path) || !filesystem::is_directory(path)) {
        if (filesystem::create_directory(path)) {
            cout << "Diretório criado com sucesso!" << endl;
            return true;
        } else {
            cout << "Erro ao criar o diretório." << endl;
            return false;  
        }
    }

    return true;

    }

        

bool FileManager::imprimirArquivo(string nome, string user){

        char currentDir[FILENAME_MAX];
        getcwd(currentDir, sizeof(currentDir));

        string path = currentDir;
        path = path + "/data/tasks/" + user + "/" + nome + ".json";
  
        ifstream file(path);

        if(!file){
            cout << "\nErro ao abrir o arquivo!";
        }
        else{
            cout << "\nConteúdo do arquivo `" << nome << "` :\n";
        }
        
        string linha;

        while(getline(file, linha)){
            cout << linha << endl;
        }

        file.close();

        return true;
}
        
void FileManager::imprimirArquivosUser(string username){
    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));
    string path = currentDir;
    path = path + "/data/tasks/" + username;

    for (auto& entry : filesystem::directory_iterator(path)) {
        if (entry.is_regular_file()) {
            cout << entry.path().filename().string() << endl;
        }
    }
}

void FileManager::carregarArquivosUser(string user, ListaEnc* &lista){
    
    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));
    string path = currentDir;
    path = path + "/data/tasks/" + user;

    for (auto& entry : filesystem::directory_iterator(path)) {
        if (entry.is_regular_file() && entry.path().extension() == ".json") {
            std::ifstream file(entry.path()); // Abrir o arquivo JSON
            if (file.is_open()) {
                nlohmann::json jsonData;
                file >> jsonData; // Ler o conteúdo do arquivo JSON
                file.close(); // Fechar o arquivo

                Tarefa item;
                item.salvarTaskLida(jsonData);
                
                lista->append(item);
            } else {
                cout << "Erro ao abrir o arquivo: " << entry.path().filename().string() << endl;
                 // Retorna false em caso de erro ao abrir o arquivo
            }
        }
    }
}

void FileManager::carregarArquivosFila(string user, Fila* &fila){
    
    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));
    string path = currentDir;
    path = path + "/data/tasks/" + user;

    for (auto& entry : filesystem::directory_iterator(path)) {
        if (entry.is_regular_file() && entry.path().extension() == ".json") {
            std::ifstream file(entry.path()); // Abrir o arquivo JSON
            if (file.is_open()) {
                nlohmann::json jsonData;
                file >> jsonData; // Ler o conteúdo do arquivo JSON
                file.close(); // Fechar o arquivo

                Tarefa item;
                item.salvarTaskLida(jsonData);
                
                fila->inserir(item);
            } else {
                cout << "Erro ao abrir o arquivo: " << entry.path().filename().string() << endl;
                 // Retorna false em caso de erro ao abrir o arquivo
            }
        }
    }
}
