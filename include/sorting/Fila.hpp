/**
 * @file Fila.hpp
 * @brief Assinaturas da classe que representa uma fila 
*/

#ifndef FILA_HPP
#define FILA_HPP

#include "ListaEnc.hpp"
#include "ListaEncNode.hpp"
#include <vector>
using namespace std;

class Fila{
    private:
        ListaEncNode* head;
        ListaEncNode* tail;
    
    public:
        Fila() : head(nullptr), tail(nullptr){}
         

        void inserir(Tarefa tarefa){
            ListaEncNode* node = new ListaEncNode(tarefa);

            if(head == nullptr){
                this->head = node;
                this->tail = node;
            } 
            else if(node->getPontuacaoPrioridadeNode() <= head->getPontuacaoPrioridadeNode()){

                node->setNext(head);                
                this->head = node;
            }

            else{
            ListaEncNode* current = head;
            while (current->getNext() != nullptr && node->getPontuacaoPrioridadeNode() >= current->getNext()->getPontuacaoPrioridadeNode()) {
                current = current->getNext();
            }
            node->setNext(current->getNext());
            current->setNext(node);
            if (current == tail) {
                tail = node;
            }
            }
    }

    void imprimirFila() {
        ListaEncNode* current = this->head;
        while (current != nullptr) {
            current->imprimirData();
            current = current->getNext();
        }
    }
};

#endif
