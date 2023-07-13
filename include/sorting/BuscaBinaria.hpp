/**
 * @file BuscaBinaria.hpp
 * @brief Assinatura da classe que implementa a busca binária recursiva e iterativa
*/

#ifndef BUSCABINARIA_HPP
#define BUSCABINARIA_HPP
#include "../file/TaskFile.hpp"
#include <vector>
#include <iostream>

using namespace std;

class BuscaBinaria{

    private:
        
        vector<Tarefa> tarefa;

    public:

        BuscaBinaria(vector<Tarefa>& vetor) : tarefa(vetor) {}

        bool buscaRecursiva(int valor, int inicio, int fim){
            if(inicio > fim){
                return false;
            }

            int meio = (inicio + fim) / 2;

            if(tarefa[meio].getPontuacaoPrioridade() == valor){
                cout << "Valor encontrado pela Busca Binária Recursiva em: " << tarefa[meio].getTitulo() << ".json" << endl;
                return true;
            } else if(tarefa[meio].getPontuacaoPrioridade() < valor){
                return buscaRecursiva(valor, meio + 1, fim);
            } else{
                return buscaRecursiva(valor, inicio, meio - 1);
            }

        }


        bool buscaIterativa(int valor){
            int inicio = 0;
            int fim = tarefa.size() - 1;

            while(inicio <= fim){
                int meio = (inicio + fim) / 2;

                if(tarefa[meio].getPontuacaoPrioridade() == valor){
                    cout << "Valor encontrado pela Busca Binária Iterativa em: " << tarefa[meio].getTitulo() << ".json"  << endl;
                    return true;
                } else if(tarefa[meio].getPontuacaoPrioridade() < valor){
                    inicio = meio + 1;
                } else {
                    fim = meio - 1;
                }

            
            }
            return false;

        }

};
#endif