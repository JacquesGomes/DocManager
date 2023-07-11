#ifndef LISTAENC_HPP
#define LISTAENC_HPP
#include "ListaEncNode.hpp"


using namespace std;

class ListaEnc{

    private:
        ListaEncNode* head;
        ListaEncNode* tail;

    public:

        ListaEnc() : head(nullptr), tail(nullptr){}

        void append(Tarefa data){
            ListaEncNode* newNode = new ListaEncNode(data);
            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->setNext(newNode);
                tail = newNode;
            }
        }

        void imprimirLista();

};
#endif