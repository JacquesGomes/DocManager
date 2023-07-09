O projeto ainda está em contrução.

# Gerenciador de tarefas
Gerenciador de tarefas em C++! Esse aplicativo possui uma tela inicial de login, e, em seguida, com o usuário já autenticado, o programa cria uma pasta no nome do novo usuário e imprime um menu de opções. O menu de tarefas permite a criação de tarefas, impressão de tarefas por nome, impressão do nome de todas as tarefas, impressão do conteúdo de todas a tarefas, impressão de todas as tarefas ordenadas por prioridades, busca de uma tarefa com um determinando valor, e por fim, a impressão do nome de todas as tarefas em ordem alfabética.

<!---Adicionar fotos dos menus aqui ---->

<p align="center">
<img src="ProdJson/docs/inicial.png" alt="Diagrama de classes">
<img src="ProdJson/docs/tasks.png" alt="Diagrama de classes">

</p>


## Diagrama de classes
<p align="center">
<img src="ProdJson/docs/classes.jpg" alt="Diagrama de classes">
</p>

## Estrutura de pastas do projeto

<ul>
<li>/bin: </li>
<li>/bin: </li>
<li>/bin: </li>
<li>/bin: </li>
<li>/bin: </li>

</ul>


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
