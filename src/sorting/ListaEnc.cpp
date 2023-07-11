#include "../../include/sorting/ListaEnc.hpp"
#include <iostream>
using namespace std;

void ListaEnc::imprimirLista(){
    while(this->head != nullptr){
        this->head->imprimirData();
        this->head = this->head->getNext();
    }

}