#include "../../include/menu/Menu.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>

using namespace std;

void Menu::imprimirMenuTasks(string user){

    int choice = 19;

    while(choice != 0){

    cout << "\n1 - Criar arquivo\n2 - Imprimir conteúdo\n0 - Sair\n";

    cout << "\nDigite a opção desejada: ";
    cin >> choice;

    if(choice == 1){
        Tarefa tarefinha;
        tarefinha.criar(user);
        string nome = tarefinha.getTitulo();
        tarefinha.imprimirConteudo(nome);
    }
    else if(choice == 2){
        string nome;
        cout << "Insira o nome do arquivo: ";

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.clear();
        getline(cin, nome);

        char currentDir[FILENAME_MAX];
        getcwd(currentDir, sizeof(currentDir));
        string path = currentDir;
        path = path + "/data/tasks/" + nome + ".json";
  
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

    else if(choice == 0){
        cout << "\nBem vindo de volta ao menu inicial!\n";
    }

    else{
        cout << "Opção inválida";
    }

    }
    

}

void Menu::imprimirMenuMain() {

    int choice = 10;
    string username, password;
    UserAuthentication authentication;
    
    while(choice != 0){
    cout << "\n1 - Login\n2 - Criar conta\n0 - Sair\n";
    cout << "\nDigite a opção desejada: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Digite seu nome: ";
        cin >> username;
        cout << "Digite sua senha: ";
        cin >> password;

        if (authentication.login(username, password)) {
            cout << "\nSucesso no login!\n";
                if(choice == 1){
                imprimirMenuTasks(username);
                }

        } else {
            cout << "\nNome ou senha inválido.\n";
        }

    } else if (choice == 2) {
        cout << "Digite seu nome: ";
        cin >> username;
        cout << "Digite sua senha: ";
        cin >> password;

        authentication.criarUsuario(username, password);
        cout << "Conta criada com sucesso!\n";
    } 
    else if(choice == 0){
        cout << "Tchau tchau\n";
    }
    else {
        cout << "Opção inválida.\n";
    }
    }

}
