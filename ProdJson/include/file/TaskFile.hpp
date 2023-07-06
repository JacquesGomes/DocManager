#ifndef TASKFILE_HPP
#define TASKFILE_HPP

#include <string>
#include "File.hpp"
#include <nlohmann/json.hpp>


using json = nlohmann::json;

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
    int pontuacaoPrioridade;

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

    void setPontuacaoPrioridade(int pontuacao);

    int getPontuacaoPrioridade(){
        return this->pontuacaoPrioridade;
    }


    void salvarTask(string fileName, string username) override;
    //void remover() override;
    void criar(string user) override;

    void salvarTaskLida(json jsonData);

    int calcularPontuacaoPrioridade(string prioridade);


};


#endif