#include "../../include/menu/Menu.hpp"
#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>
#include <chrono>
#include <ctime>
#include <sstream>

using namespace std;

/*=========Getters and Setters ==========*/

string Tarefa::getAtribuidaPor()
{
    return atribuidaPor;
}
void Tarefa::setAtribuidaPor(string atribuidaPor)
{
    this->atribuidaPor = atribuidaPor;
}
string Tarefa::getResponsavel()
{
    return responsavel;
}
void Tarefa::setResponsavel(string responsavel)
{
    this->responsavel = responsavel;
}
string Tarefa::getAssunto()
{
    return assunto;
}
void Tarefa::setAssunto(string assunto)
{
    this->assunto = assunto;
}
string Tarefa::getDescricao()
{
    return descricao;
}
void Tarefa::setDescricao(string descricao)
{
    this->descricao = descricao;
}
string Tarefa::getNotas()
{
    return notas;
}
void Tarefa::setNotas(string notas)
{
    this->notas = notas;
}
string Tarefa::getStatus()
{
    return status;
}
void Tarefa::setStatus(string status)
{
    this->status = status;
}
string Tarefa::getPrioridade()
{
    return prioridade;
}
void Tarefa::setPrioridade(string prioridade)
{
    this->prioridade = prioridade;
}
string Tarefa::getDataFim()
{
    return dataFim;
}
void Tarefa::setDataFim(string dataFim)
{
    this->dataFim = dataFim;
}
void Tarefa::setPontuacaoPrioridade(int prioridade){
    this->pontuacaoPrioridade = prioridade;
}

/*============ Métodos ===========*/

int Tarefa::calcularPontuacaoPrioridade(string prioridade){
    int soma = 0;
    if(prioridade == "muito baixa"){
        soma += 30;
    }
    else if(prioridade == "baixa"){
        soma += 20;
    }
    else if(prioridade == "média"){
        soma += 15;
    }
    else if(prioridade == "grande"){
        soma += 10;
    }
    else if(prioridade == "muito grande"){
        soma += 5;
    }
    else if(prioridade == "urgente"){
        soma += 0;
    }
    else{
        soma += 30;
    }

    return soma;

}

void Tarefa::salvarTask(string nome, string user)
{

    char currentDir[FILENAME_MAX];
    getcwd(currentDir, sizeof(currentDir));
    string path = currentDir;

    path = path + "/data/tasks/" + user + "/" + nome + ".json";
    cout << path << endl;

    ofstream arquivo_saida(path);

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
    j["PontuacaoPrioridade:"] = this->pontuacaoPrioridade;

    arquivo_saida << setw(2) << j << '\n';

    arquivo_saida.close();
}

void Tarefa::criar(string user)
{

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
    
    cout << "Prioridade(Digite: muito baixa; baixa; média; grande; muito grande; urgente): ";
    getline(cin, temp);
    this->setPrioridade(temp);

    cout << "Data de início: ";
    getline(cin, temp);

    while (!checarFormatoData(temp))
    {
        cout << "Formato de data inválido! Tente inserir algo como D/M/A." << endl;
        getline(cin, temp);
    }

    this->setDataInicio(temp);

    cout << "Data de entrega: ";
    getline(cin, temp);

    while (!checarFormatoData(temp))
    {
        cout << "Formato de data inválido! Tente inserir algo como D/M/A." << endl;
        getline(cin, temp);
    }

    this->setDataFim(temp);


    string prio = this->getPrioridade();
    long int tempint = calcularPontuacaoPrioridade(prio);
    this->setPontuacaoPrioridade(tempint);
}

void Tarefa::salvarTaskLida(json j){

    this->setUsuario(j["Usuário:"]);
    this->setTitulo(j["Título:"]);
    this->setDataInicio(j["DataCriação:"]);
    this->setCategoria(j["Categoria:"]);
    this->atribuidaPor = j["AtribuidaPor:"];
    this->responsavel = j["Responsável:"];
    this->assunto = j["Assunto:"];
    this->descricao = j["Descrição:"];
    this->notas = j["Notas:"];
    this->status = j["Status:"];
    this->prioridade = j["Prioridade:"];
    this->dataFim = j["PrazoFinal:"];
    this->pontuacaoPrioridade = j["PontuacaoPrioridade:"];

}