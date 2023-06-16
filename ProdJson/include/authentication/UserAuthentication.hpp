#ifndef USERAUTHENTICATION_HPP
#define USERAUTHENTICATION_HPP

#include <string>

using namespace std;

class UserAuthentication{
    public:

        bool login(string username, string password);
        void criarUsuario(string username, string password);
};


#endif 