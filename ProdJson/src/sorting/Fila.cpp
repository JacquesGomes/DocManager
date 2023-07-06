#include "../../include/sorting/Fila.hpp"
#include <iostream>
using namespace std;

void Fila::imprimirFila(){
    ListaEncNode* current = head;
    while(current != nullptr){
        current->imprimirData();
        current = current->getNext();
    }

}