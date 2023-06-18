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

bool File::checarFormatoData(string data){
    // Check the length of the string
    if (data.length() != 10) {
        return false;
    }

    // Check if the separators are in the correct positions
    if (data[2] != '/' || data[5] != '/') {
        return false;
    }

    // Extract the day, month, and year substrings
    string dayStr = data.substr(0, 2);
    string monthStr = data.substr(3, 2);
    string yearStr = data.substr(6);

    // Convert the substrings to integers
    int day, month, year;
    try {
        day = stoi(dayStr);
        month = stoi(monthStr);
        year = stoi(yearStr);
    } catch (const invalid_argument& e) {
        return false; // Error occurred during conversion
    } catch (const out_of_range& e) {
        return false; // Number is out of range
    }

    // Check the validity of the day, month, and year values
    if (day <= 0 || day > 31 || month <= 0 || month > 12 || year < 2023) {
        return false;
    }

    return true; // Format is correct


}