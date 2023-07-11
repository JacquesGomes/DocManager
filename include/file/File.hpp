#ifndef FILE_HPP
#define FILE_HPP
#include <string>

using namespace std;

class File{
    private:
        string caminhoArquivo;
        string usuario;
        string titulo;
        string dataInicio;
        string categoria;

    public:

        File(){};

        virtual void salvarTask(string fileName, string username) = 0;

        virtual void criar(string user) = 0;

        void setCaminhoArquivo(string caminho);
        string getCaminho();

        void setUsuario(string usuario);
        string getUsuario();

        void setTitulo(string titulo);
        string getTitulo();

        void setDataInicio(string dataInicio);
        string getDataInicio();

        void setCategoria(string categoria);
        string getCategoria();

        bool checarFormatoData(string data);
};



#endif