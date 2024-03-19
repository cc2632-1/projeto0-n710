#define TOTAL 100

typedef struct Tarefa {
  int prioridade;
  char descricao[300];
  char categoria[100];
} Tarefa;

int criar(Tarefa tarefas[], int *pos);
int deletar(Tarefa tarefas[], int *pos);
int listar(Tarefa tarefas[], int pos);
int salvar(Tarefa tarefas[], int total, int pos);
int carregar(Tarefa tarefas[], int total, int pos);