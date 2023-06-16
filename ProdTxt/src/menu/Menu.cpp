#include "../../include/menu/Menu.hpp"
#include <iostream>
#include <string>

using namespace std;

void Menu::imprimirMenuTasks(){

    int choice = 19;

    while(choice != 0){
    cout << "1 - Criar arquivo\n2 - Imprimir conteúdo\n3 - Voltar\n0 - Sair\n";

    cout << "Enter your choice: ";
    cin >> choice;
    if(choice == 1){
        Tarefa tarefinha;
        tarefinha.criar();
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

    int choice;
    string username, password;
    UserAuthentication authentication;

    cout << "1 - Login\n2 - Create Account\n";
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
                imprimirMenuTasks();
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
    } else {
        cout << "Invalid choice.\n";
    }

}
