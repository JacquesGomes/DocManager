O projeto ainda está em contrução.

# Gerenciador de tarefas
Gerenciador de tarefas em C++! Esse aplicativo possui uma tela inicial de login, e, em seguida, com o usuário já autenticado, o programa cria uma pasta no nome do novo usuário e imprime um menu de tarefas. 
<br><br>
Por sua vez, o menu de tarefas permite a criação de tarefas, impressão de tarefas por nome, impressão do nome de todas as tarefas, impressão do conteúdo de todas a tarefas, impressão de todas as tarefas ordenadas por prioridades, busca de uma tarefa com um determinando valor, e por fim, a impressão do nome de todas as tarefas em ordem alfabética.
<br>
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
<li>/src: Código fonte (.cpp). </li>
<li>/include: Cabeçalhos contendo a assinatura das classes/funções (.hpp). </li>
<li>/docs: Documentação do projeto, incluindo as imagens. </li>
<li>/data: Arquivos em json com o conteúdo das tarefas criadas pelos usuários. </li>
<li>makefile: diretrizes para a compilação.</li>

</ul>


### Exemplo de TaskFile

{<br>
  "caminhoArquivo": "caminho/do/arquivo",<br>
  "usuario": "Terminal Root",<br>
  "titulo": "Marcos Oliveira",<br>
  "dataInicio": "2023-06-09",<br>
  "categoria": "Tarefa",<br>
  "atribuidaPor": "João Silva",<br>
  "responsavel": "Marcos Oliveira",<br>
  "assunto": "Implementação do recurso XYZ",<br>
  "descricao": "Detalhes da tarefa a ser realizada",<br>
  "notas": "Notas adicionais sobre a tarefa",<br>
  "status": "Em andamento",<br>
  "prioridade": "Alta",<br>
  "dataFim": "03/02/2024",<br>
  "pontuacaoPrioridade": 10;<br>
}<br>
