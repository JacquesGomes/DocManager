#include "ListaEnc.hpp"
#include <vector>
using namespace std;

class Fila{
    private:
        ListaEnc lista;
    
    public:
        Fila(){}

        void insert_fila(JsonStruct data){
            lista.append(data);
        }

        Fila mergeSort(Fila fila);

        Fila lerJsonFile(vector<string> filenames);

        

};