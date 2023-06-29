#ifndef MENU_HPP
#define MENU_HPP


#include "../authentication/UserAuthentication.hpp"
#include "../filemanagement/FileManager.hpp"
#include "../file/TaskFile.hpp"


class Menu{
    public:
        
        void imprimirMenuMain();
        void imprimirMenuTasks(string user);
        void imprimirMenuReport(string user);
        void imprimirMenuTables(string user);
        void imprimirMenuAdm(string user);
};

#endif