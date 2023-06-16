#include "../../include/authentication/UserAuthentication.hpp"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

bool UserAuthentication::login(string usuario, string password){
    ifstream file("password.txt");

    string line;

    while(getline(file, line)){
        size_t delimiterPos = line.find(':');
        string storedUsername = line.substr(0,delimiterPos);
        string storedPassword = line.substr(delimiterPos + 1);

        if(usuario == storedUsername && password == storedPassword){
            file.close();
            return true;
        }

    }
    file.close();
    return false;
}

void UserAuthentication::criarUsuario(string username, string password){
    ofstream file("password.txt", ios::app);
    file << username << ":" << password << "\n";
    file.close();

}


