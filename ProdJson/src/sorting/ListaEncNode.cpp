#include "../../include/sorting/ListaEncNode.hpp"
#include <iostream>
using namespace std;

void ListaEncNode::imprimirData(){

    cout << "\n<============= Tarefa ===============>\n"; 

    cout << "Usuário: " << this->data.getUsuario() << "\n";
    cout <<  "Título: " << this->data.getTitulo() << "\n";
    cout <<  "Data de início: " << this->data.getDataInicio() << "\n";
    cout <<  "Categoria: " << this->data.getCategoria() << "\n";
    cout <<  "Atribuída por: " << this->data.getAtribuidaPor() << "\n";
    cout <<  "Responsável: " << this->data.getResponsavel() << "\n";
    cout <<  "Assunto: " << this->data.getAssunto() << "\n";
    cout <<  "Descrição: " << this->data.getDescricao() << "\n";
    cout <<  "Notas: " << this->data.getNotas() << "\n";
    cout <<  "Status: " << this->data.getStatus() << "\n";
    cout <<  "Prioridade: " << this->data.getPrioridade() << "\n";
    cout <<  "Prazo final: " << this->data.getDataFim() << "\n";

    }
