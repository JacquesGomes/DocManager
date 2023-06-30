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
        ListaEncNode* next;
    public:
        ListaEncNode(){}

        ListaEncNode(Tarefa data){
            this->data = data;
            this->next = NULL;

        } 
        
        void setData(Tarefa data);

        void setNext(ListaEncNode* node){
            this->next = node;
        };

        ListaEncNode* getNext(){
            return this->next;
        }

        void imprimirData();
};
#endif