#include "../../include/menu/Menu.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>

using namespace std;

void Tarefa::imprimirConteudo(string nome){
    
    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));

    string path = currentDir;

    size_t lastBar = path.find_last_of('/');

    path = path.substr(0, lastBar);
    path = path + "/data/tasks/";

    string result = path + nome;

    ofstream arquivo_saida(result);

    arquivo_saida << "CaminhoArquivo: "<< this->getCaminho() << "\n";

    arquivo_saida << "Usuario: "<< this->getUsuario() << "\n";

    arquivo_saida << "Título: "<< this->getTitulo() << "\n";

    arquivo_saida << "Data de criação: "<< this->getDataInicio() << "\n";

    arquivo_saida << "Categoria: "<< this->getCategoria() << "\n";

    arquivo_saida << "Atribuída por: "<< this->atribuidaPor << "\n";

    arquivo_saida << "Responsável: "<< this->responsavel << "\n";

    arquivo_saida << "Assunto: "<< this->assunto << "\n";

    arquivo_saida << "Descrição: "<< this->responsavel << "\n";

    arquivo_saida << "Notas: "<< this->notas << "\n";

    arquivo_saida << "Status: "<< this->status << "\n";

    arquivo_saida << "Prioridade: "<< this->prioridade << "\n";

    arquivo_saida << "Prazo final: "<< this->dataFim << "\n";

    arquivo_saida.close();


}

string Tarefa::getAtribuidaPor() {
    return atribuidaPor;
}

void Tarefa::setAtribuidaPor(string atribuidaPor) {
    this->atribuidaPor = atribuidaPor;
}

string Tarefa::getResponsavel() {
    return responsavel;
}

void Tarefa::setResponsavel(string responsavel) {
    this->responsavel = responsavel;
}

string Tarefa::getAssunto() {
    return assunto;
}

void Tarefa::setAssunto(string assunto) {
    this->assunto = assunto;
}

string Tarefa::getDescricao() {
    return descricao;
}

void Tarefa::setDescricao(string descricao) {
    this->descricao = descricao;
}

string Tarefa::getNotas() {
    return notas;
}

void Tarefa::setNotas(string notas) {
    this->notas = notas;
}

string Tarefa::getStatus() {
    return status;
}

void Tarefa::setStatus(string status) {
    this->status = status;
}

string Tarefa::getPrioridade() {
    return prioridade;
}

void Tarefa::setPrioridade(string prioridade) {
    this->prioridade = prioridade;
}

string Tarefa::getDataFim() {
    return dataFim;
}

void Tarefa::setDataFim(string dataFim) {
    this->dataFim = dataFim;
}

void Tarefa::criar(){

    string temp;

    cout << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.clear();

    /*cout << "CaminhoArquivo: ";
    getline(cin, temp);
    this->setCaminhoArquivo(temp);*/

    cout << "Usuario: ";
    getline(cin, temp);
    this->setUsuario(temp);

    cout << "Título: ";
    getline(cin, temp);
    this->setTitulo(temp);

    cout << "Data de criação: ";
    getline(cin, temp);
    this->setDataInicio(temp);


    cout << "Categoria: ";
    getline(cin, temp);
    this->setCategoria(temp);
    
    cout << "Atribuída por: ";
    getline(cin, temp);
    this->setAtribuidaPor(temp);

    cout << "Responsável: ";
    getline(cin, temp);
    this->setResponsavel(temp);

    cout << "Assunto: ";
    getline(cin, temp);
    this->setAssunto(temp);

    cout << "Descrição: ";
    getline(cin, temp);
    this->setDescricao(temp);

    cout << "Notas: ";
    getline(cin, temp);
    this->setNotas(temp);

    cout << "Status: ";
    getline(cin, temp);
    this->setStatus(temp);

    cout << "Prioridade: ";
    getline(cin, temp);
    this->setPrioridade(temp);

    cout << "Data de início: ";
    getline(cin, temp);
    this->setDataInicio(temp);

    cout << "Data de entrega: ";
    getline(cin, temp);
    this->setDataFim(temp);

    
}