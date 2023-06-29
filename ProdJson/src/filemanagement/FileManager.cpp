#include <string>
#include <fstream>
#include <iostream>
#include <limits>
#include <unistd.h>
#include <filesystem>

#include "../../include/filemanagement/FileManager.hpp"

using namespace std;

bool FileManager::criarDiretorio(string nome, string user){

    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));
    string path = currentDir;
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

    }

        

bool FileManager::imprimirEmArquivo(string nome, string user){

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.clear();
        getline(cin, nome);

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
}
        
int main(){

    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));
    string path = currentDir;
    path = path + "/" + "teste";
    cout << path  << endl;

    if (!filesystem::exists(path) || !filesystem::is_directory(path)) {
        if (filesystem::create_directory(path)) {
            cout << "Directory created successfully." << endl;
            return true;
        } else {
            cout << "Failed to create directory." << endl;
            return false;  // Return empty string on failure
        }
    }
}
