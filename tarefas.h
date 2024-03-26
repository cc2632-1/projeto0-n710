#define TOTAL 100

typedef struct Tarefa {
  int prioridade;
  char descricao[300];
  char categoria[100];
} Tarefa;

typedef enum Erros {
  OK, MAX_TAREFAS, SEM_TAREFAS, NAO_EXISTE, 
  ABRIR, FECHAR, ESCREVER, LER
} Erro;

Erro criar(Tarefa tarefas[], int *pos);
Erro deletar(Tarefa tarefas[], int *pos);
Erro listar(Tarefa tarefas[], int pos);
Erro salvar(Tarefa tarefas[], int total, int pos);
Erro carregar(Tarefa tarefas[], int total, int *pos);
void clearBuffer();