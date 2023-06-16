#include "../../include/file/File.hpp"
#include <iostream>
#include <string>

void File::setCaminhoArquivo(string caminho) {
    caminhoArquivo = caminho;
}

string File::getCaminho() {
    return caminhoArquivo;
}

void File::setUsuario(string usuario) {
    this->usuario = usuario;
}

string File::getUsuario() {
    return usuario;
}

void File::setTitulo(string titulo) {
    this->titulo = titulo;
}

string File::getTitulo() {
    return titulo;
}

void File::setDataInicio(string dataInicio) {
    this->dataInicio = dataInicio;
}

string File::getDataInicio() {
    return dataInicio;
}

void File::setCategoria(string categoria) {
    this->categoria = categoria;
}

string File::getCategoria() {
    return categoria;
}
