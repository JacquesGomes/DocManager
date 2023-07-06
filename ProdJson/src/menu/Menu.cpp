#include "../../include/menu/Menu.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include <limits>

using namespace std;

void Menu::imprimirMenuTasks(string user){

    int choice = 19;

    while(choice != 0){

    cout << "\n1 - Criar arquivo\n2 - Imprimir arquivo\n3 - Listar arquivos\n4 - Imprimir o conteúdo de todos os arquivos\n5 - Imprimir o conteúdo de todos os arquivos de acordo com a prioridade\n0 - Sair\n";

    cout << "\nDigite a opção desejada: ";
    cin >> choice;

    if(choice == 1){

        Tarefa tarefinha;
        tarefinha.criar(user);
        string arquivo = tarefinha.getTitulo();

        FileManager manager;
        bool teste = manager.criarDiretorio(user);

        if(teste == false) {
            cout << "Erro ao criar/acessar o diretório do usuário";
        }
        else{
            tarefinha.salvarTask(arquivo, user);
        }

    }

    else if(choice == 2){

        string arquivo;
        cout << "Insira o nome do arquivo: ";
        cin >> arquivo;

        FileManager manager;
        manager.imprimirArquivo(arquivo, user);

    }

    else if(choice == 3){
        FileManager manager;
        manager.imprimirArquivosUser(user);
    }

    else if(choice == 4){
        ListaEnc* lista = new ListaEnc();
        FileManager managers;
        managers.carregarArquivosUser(user, lista);
        lista->imprimirLista();
        delete lista;
    }

    else if(choice == 5){
        Fila* fila = new Fila();
        FileManager manager;
        manager.carregarArquivosFila(user, fila);
        fila->imprimirFila();
        delete fila;

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
