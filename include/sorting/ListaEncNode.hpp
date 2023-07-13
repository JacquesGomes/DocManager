/**
 * @file ListaEncNode.hpp
 * @brief Assinaturas da classe que representa um node de uma lista encadeada
*/

#ifndef LISTAENCNODE_HPP
#define LISTAENCNODE_HPP
#include "../file/File.hpp"
#include "../file/TaskFile.hpp"
#include <string>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

class ListaEncNode{
    private:
        Tarefa data;
        ListaEncNode* next = nullptr;
        int pontuacaoPrioridade;

    public:
        ListaEncNode(){}

        ListaEncNode(Tarefa data){
            this->data = data;
            this->pontuacaoPrioridade = data.getPontuacaoPrioridade();
            this->next = nullptr;

        } 
        
        void setData(Tarefa data);

        void setPontuacaoPrioridade(int pontuacao){
            this->pontuacaoPrioridade = pontuacao;
        }

        int getPontuacaoPrioridadeNode(){
            return this->pontuacaoPrioridade;
        }

        void setNext(ListaEncNode* node){
            this->next = node;
        };

        ListaEncNode* getNext(){
            return this->next;
        }

        void imprimirData();
};
#endif