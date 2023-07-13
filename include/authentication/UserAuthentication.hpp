/**
 * @file UserAuthentication.hpp
 * @brief Assinatura da classe de autenticação e gerenciamento do usuário
*/

#ifndef USERAUTHENTICATION_HPP
#define USERAUTHENTICATION_HPP

#include <string>

using namespace std;

class UserAuthentication{

    public:
        UserAuthentication(){};
        bool login(string username, string password);
        void criarUsuario(string username, string password);
};


#endif 