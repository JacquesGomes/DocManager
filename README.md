# Projeto_DocManager
Gerenciador de documentos em c++, com uma versão para json e outra para arquivos de texto simples

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
  "dataFim": "2023-06-30"
}
