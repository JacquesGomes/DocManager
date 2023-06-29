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
    //path = path + "/" + "teste";
    cout << path << endl;

        // Check if directory exists and create it if it doesn't
    if (!filesystem::exists(path) || !filesystem::is_directory(path)) {
        if (filesystem::create_directory(path)) {
            cout << "Directory created successfully." << endl;
            return true;
        } else {
            cout << "Failed to create directory." << endl;
            return false;  // Return empty string on failure
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
    //path = path + "/" + "teste";
    cout << path << endl;

    
    for (auto& entry : filesystem::directory_iterator(path)) {
        if (entry.is_regular_file()) {
            cout << entry.path().filename().string() << endl;
        }
    }
}