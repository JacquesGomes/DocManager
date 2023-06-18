# Projeto_DocManager
Gerenciador de documentos em c++, com a opção de manipular arquivos em json ou em formato de texto simples.

O projeto ainda está em contrução.

<br>
project/ <br>
├── src/ <br>
│   ├── authentication/ <br>
│   │   └── UserAuthentication.cpp <br>
│   ├── filemanagement/ <br>
│   │   ├── FileManager.cpp <br>
│   ├── menu/ <br>
│   │   ├── Menu.cpp <br>
│   ├── sorting/ <br>
│   │   └── Sorting.cpp <br>
│   ├── file/ <br>
│   │   ├── TaskFile.cpp <br>
│   │   ├── TableFile.cpp <br>
│   │   └── ReportFile.cpp <br>
│   └── main.cpp <br>
├── include/ <br>
│   ├── authentication/ <br>
│   │   └── UserAuthentication.hpp <br>
│   ├── filemanagement/ <br>
│   │   └── FileManager.hpp <br>
│   ├── menu/ <br>
│   │   └── Menu.hpp <br>
│   ├── sorting/ <br>
│   │   └── Sorting.hpp <br>
│   └── file/ <br>
│       ├── File.hpp <br>
│       ├── TaskFile.hpp <br>
│       ├── TableFile.hpp <br>
│       └── ReportFile.hpp <br>
├── bin/ <br>
├── data/ <br>
│   ├── users.txt <br>
│   ├── tasks/ <br>
│   ├── tables/ <br>
│   └── reports/ <br>
├── docs/ <br>
│   └── README.md <br>
└── makefile


Exemplo TaskFile:

{
  "caminhoArquivo": "caminho/do/arquivo",
  "usuario": "Terminal Root",
  "titulo": "Marcos Oliveira",
  "dataInicio": "2023-06-09",
  "categoria": "Tarefa",
  "atribuidaPor": "João Silva",
  "responsavel": "Marcos Oliveira",
  "assunto": "Implementação do recurso XYZ",
  "descricao": "Detalhes da tarefa a ser realizada",\
  "notas": "Notas adicionais sobre a tarefa",
  "status": "Em andamento",
  "prioridade": "Alta",
  "dataFim": "03/02/2024"
}
==================== Complexidades ==============================
Merge Sort:

O Merge Sort é um algoritmo de ordenação eficiente e de complexidade O(n log n).
Ele divide a lista não ordenada em sublistas menores, classifica-as recursivamente e, em seguida, mescla essas sublistas classificadas para obter a lista final ordenada.
O Merge Sort tem um desempenho consistente em diferentes tamanhos de entrada e é amplamente utilizado para ordenar grandes conjuntos de dados.
No entanto, o Merge Sort requer espaço adicional para armazenar as sublistas durante a mesclagem, o que pode ser um fator limitante em casos com restrições de memória.
Busca Binária:

A Busca Binária é um algoritmo de busca eficiente em listas ordenadas e tem complexidade O(log n).
Ele divide repetidamente a lista ao meio, descartando a metade na qual o elemento buscado não pode estar, até encontrar o elemento desejado ou concluir que ele não está presente.
A Busca Binária é muito mais rápida do que a busca sequencial em listas ordenadas, especialmente em grandes conjuntos de dados.
No entanto, a Busca Binária requer que a lista esteja ordenada para funcionar corretamente.
Linked List:

A Linked List é uma estrutura de dados em que os elementos são armazenados em nós que contêm um valor e um ponteiro para o próximo nó.
A Linked List permite a inserção e remoção eficientes de elementos em qualquer posição, pois não requer realocação de memória.
No entanto, o acesso aos elementos em uma Linked List não é tão eficiente quanto em estruturas de dados como arrays, pois requer percorrer a lista sequencialmente até encontrar o elemento desejado.
A Linked List é ideal quando as operações de inserção e remoção são frequentes e o acesso aleatório aos elementos é menos importante.
Fila:

A Fila é uma estrutura de dados em que os elementos são adicionados ao final e removidos do início, seguindo a política FIFO (First-In-First-Out).
A inserção e remoção de elementos em uma Fila são eficientes, com complexidade O(1).
As Filas são frequentemente utilizadas em cenários em que a ordem de chegada é importante, como processamento de tarefas em um sistema ou gerenciamento de requisições.
No entanto, o acesso a elementos em posições intermediárias da Fila não é eficiente, pois requer percorrer os elementos anteriores.
