#include "../../include/sorting/ListaEnc.hpp"
#include <iostream>
using namespace std;

void ListaEnc::imprimirLista(){
    while(this->head != nullptr){
        this->head->imprimirData();
        head = this->head->getNext();
    }

}