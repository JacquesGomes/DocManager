#include <string>
#include "File.hpp"

using namespace std;

class Tarefa : public File {

private:
    string atribuidaPor;
    string responsavel;
    string assunto;
    string descricao;
    string notas;
    string status;
    string prioridade;
    string dataFim;

public:
    
    Tarefa(){};

    string getAtribuidaPor();
    void setAtribuidaPor(string atribuidaPor);

    string getResponsavel();
    void setResponsavel(string responsavel);

    string getAssunto();
    void setAssunto(string assunto);

    string getDescricao();
    void setDescricao(string descricao);

    string getNotas();
    void setNotas(string notas);

    string getStatus();
    void setStatus(string status);

    string getPrioridade();
    void setPrioridade(string prioridade);

    string getDataFim();
    void setDataFim(string dataFim);

    void imprimirConteudo(string fileName) override;
    //void remover() override;
    void criar() override;


};