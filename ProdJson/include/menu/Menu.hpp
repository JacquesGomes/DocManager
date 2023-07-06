#ifndef MENU_HPP
#define MENU_HPP

#include "../authentication/UserAuthentication.hpp"
#include "../filemanagement/FileManager.hpp"
#include "../file/TaskFile.hpp"
#include "../sorting/ListaEnc.hpp"
#include "../sorting/Fila.hpp"
#include "../sorting/BuscaBinaria.hpp"


class Menu{
    public:
        void imprimirMenuMain();
        void imprimirMenuTasks(string user);
};

#endif