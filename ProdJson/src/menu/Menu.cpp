#include "../../include/menu/Menu.hpp"
#include <iostream>
#include <string>

using namespace std;

void Menu::imprimirMenuTasks(string user){

    int choice = 19;

    while(choice != 0){

    cout << "1 - Criar arquivo\n2 - Imprimir conteúdo\n3 - Voltar\n0 - Sair\n";

    cout << "Enter your choice: ";
    cin >> choice;
    if(choice == 1){
        Tarefa tarefinha;
        tarefinha.criar(user);
        string nome;
        cout << "Insira o nome do arquivo: ";
        cin >> nome;
        tarefinha.imprimirConteudo(nome);
    }
    /*if(choice == 2){
        string nome;
        cout << "Insira o nome do arquivo: ";
        cin >> nome;
    }*/
    }

}

void Menu::imprimirMenuMain() {

    int choice = 10;
    string username, password;
    UserAuthentication authentication;
    
    while(choice != 0){
    cout << "\n1 - Login\n2 - Criar conta\n0 - Sair\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (authentication.login(username, password)) {
            cout << "Login successful!\n";
                if(choice == 1){
                imprimirMenuTasks(username);
                }

        } else {
            cout << "Invalid username or password.\n";
        }
    } else if (choice == 2) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        authentication.criarUsuario(username, password);
        cout << "Account created successfully!\n";
    } 
    else if(choice == 0){
        cout << "Tchau tchau\n";
    }
    else {
        cout << "Invalid choice.\n";
    }
    }

}
