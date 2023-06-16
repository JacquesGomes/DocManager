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
        //File(string caminhoArquivo, string usuario, string titulo, string dataInicio, string categoria) : caminhoArquivo(caminhoArquivo), usuario(usuario), titulo(titulo), dataInicio(dataInicio), categoria(categoria){};

        File(){};

        /*virtual ~File() = 0;
        virtual void criar() = 0;
        virtual void remover() = 0;*/
        virtual void imprimirConteudo(string fileName) = 0;

        virtual void criar() = 0;

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
};



#endif