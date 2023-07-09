O projeto ainda está em contrução.

# Gerenciador de tarefas
Gerenciador de tarefas em C++! Esse aplicativo possui uma tela inicial de login, e, em seguida, com o usuário já autenticado, o programa cria uma pasta no nome do novo usuário e imprime um menu de opções. O menu de tarefas permite a criação de tarefas, leitura de tarefas, impressão do nome de todas as tarefas, impressão do conteúdo de todas a tarefas, impressão de todas as tarefas ordenadas por prioridades, busca de uma tarefa com um determinando valor, e por fim, a impressão do nome de todas as tarefas em ordem alfabética.

<!---Adicionar fotos dos menus aqui ---->

# Diagram de classes
<p align="center">
<img src="/docs/classes.jpeg" alt="Diagrama de classes">
</p>

# Estrutura de pastas do projeto

<br>
project/ <br>
├── src/ <br>
│   ├── authentication/ <br>
│   │   └── UserAuthentication.cpp <br>
│   ├── filemanagement/ <br>
│   │   └──  FileManager.cpp <br>
│   ├── menu/ <br>
│   │   └── Menu.cpp <br>
│   ├── sorting/ <br>
│   │   └── Sorting.cpp <br>
│   ├── file/ <br>
│   │   └── TaskFile.cpp <br>
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
│       └── TaskFile.hpp <br>
├── bin/ <br>
├── data/ <br>
│   ├── users.txt <br>
│   ├── usuario1/ <br>
│   ├── usuario2/ <br>
│   └── usuario.../ <br>
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
  "pontuacaoPrioridade": 10; 
}
