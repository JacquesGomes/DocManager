#ifndef LISTAENCNODE_HPP
#define LISTAENCNODE_HPP
#include "JsonStruct.hpp"
#include <string>

using namespace std;

class ListaEncNode{
    public:
        JsonStruct data;
        ListaEncNode* next;

        ListaEncNode(JsonStruct data) : data(data), next(nullptr) {}
};
#endif