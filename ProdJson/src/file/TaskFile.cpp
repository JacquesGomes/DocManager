#include "../../include/menu/Menu.hpp"
#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include "../../include/filemanagement/FileManager.hpp"

using namespace std;

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

void Tarefa::imprimirConteudo(string nome){
    
    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));

    string path = currentDir;

    path = path + "/data/tasks/";

    string result = path + nome + ".json";

    ofstream arquivo_saida(result);

    nlohmann::json j;

    j["Usuário:"] = this->getUsuario();
    j["Título:"] = this->getTitulo();
    j["DataCriação:"] = this->getDataInicio();
    j["Categoria:"] = this->getCategoria();
    j["AtribuidaPor:"] = this->atribuidaPor;
    j["Responsável:"] = this->responsavel;
    j["Assunto:"] = this->assunto;
    j["Descrição:"] = this->descricao;
    j["Notas:"] = this->notas;
    j["Status:"] = this->status;
    j["Prioridade:"] = this->prioridade;
    j["PrazoFinal:"] = this->dataFim;

    arquivo_saida << setw(2) << j << '\n';

    arquivo_saida.close();

}

void Tarefa::criar(string user){

    string temp;

    cout << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.clear();
 
    this->setUsuario(user);

    cout << "Título: ";
    getline(cin, temp);
    this->setTitulo(temp);

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
   
    while(!checarFormatoData(temp)){
        cout << "Formato de data inválido! Tente inserir algo como D/M/A." << endl;
        getline(cin, temp);
        
    }

    this->setDataInicio(temp);

    cout << "Data de entrega: ";
    getline(cin, temp);

    while(!checarFormatoData(temp)){
        cout << "Formato de data inválido! Tente inserir algo como D/M/A." << endl;
        getline(cin, temp);
        
    }

    this->setDataFim(temp);

    
}