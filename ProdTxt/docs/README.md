project/
├── src/
│   ├── authentication/
│   │   └── UserAuthentication.cpp
│   ├── filemanagement/
│   │   ├── FileManager.cpp
│   ├── menu/
│   │   ├── Menu.cpp
│   ├── sorting/
│   │   └── Sorting.cpp
│   ├── file/
│   │   ├── TaskFile.cpp
│   │   ├── TableFile.cpp
│   │   └── ReportFile.cpp
│   └── main.cpp
├── include/
│   ├── authentication/
│   │   └── UserAuthentication.hpp
│   ├── filemanagement/
│   │   └── FileManager.hpp
│   ├── menu/
│   │   └── Menu.hpp
│   ├── sorting/
│   │   └── Sorting.hpp
│   └── file/
│       ├── File.hpp
│       ├── TaskFile.hpp
│       ├── TableFile.hpp
│       └── ReportFile.hpp
├── bin/
├── data/
│   ├── users.txt
│   ├── tasks/
│   ├── tables/
│   └── reports/
├── docs/
│   └── README.md
└── makefile


File.hpp (base class)
TaskFile.hpp (derived class)
TaskFile.cpp (derived class)
TableFile.hpp (derived class)
TableFile.cpp (derived class)
ReportFile.hpp (derived class)
ReportFile.cpp (derived class)
FileManager.hpp
FileManager.cpp
Menu.hpp
Menu.cpp
Sorting.hpp
Sorting.cpp
UserAuthentication.hpp
UserAuthentication.cpp


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
  "descricao": "Detalhes da tarefa a ser realizada",
  "notas": "Notas adicionais sobre a tarefa",
  "status": "Em andamento",
  "prioridade": "Alta",
  "dataFim": "2023-06-30"
}

