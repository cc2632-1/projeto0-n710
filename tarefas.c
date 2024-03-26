#include "tarefas.h"
#include <stdio.h>
#include <string.h>

Erro criar(Tarefa tarefas[], int *pos) {
  if (*pos >= TOTAL)
    return MAX_TAREFAS;

  printf("Entre com a prioridade: ");
  scanf("%d", &tarefas[*pos].prioridade);
  clearBuffer();
  printf("Entre com a categoria: ");
  fgets(tarefas[*pos].categoria, 100, stdin);
  clearBuffer();
  printf("Entre com a descricao: ");
  fgets(tarefas[*pos].descricao, 300, stdin);

  *pos = *pos + 1;

  return OK;
}

Erro deletar(Tarefa tarefas[], int *pos) {
  if (*pos == 0)
    return SEM_TAREFAS;

  int pos_d;
  printf("Entre com a posicao da tarefa: ");
  scanf("%d", &pos_d);
  pos_d--;
  if (pos_d >= *pos)
    return NAO_EXISTE;

  for (int i = pos_d; i < *pos; i++) {
    tarefas[i].prioridade = tarefas[i + 1].prioridade;
    strcpy(tarefas[i].categoria, tarefas[i + 1].categoria);
    strcpy(tarefas[i].descricao, tarefas[i + 1].descricao);
  }

  *pos = *pos - 1;

  return OK;
}

Erro listar(Tarefa tarefas[], int pos) {
  if (pos == 0)
    return SEM_TAREFAS;

  for (int i = 0; i < pos; i++) {
    printf("Pos: %d\t", i + 1);
    printf("Prioridade: %d\t", tarefas[i].prioridade);
    printf("Categoria: %s\t", tarefas[i].categoria);
    printf("Descricao: %s\n", tarefas[i].descricao);
  }

  return OK;
}

Erro salvar(Tarefa tarefas[], int total, int pos) {
  FILE *f = fopen("tarefas", "wb");
  if(f == NULL)
    return ABRIR;

  int e = fwrite(tarefas, total, sizeof(Tarefa), f);
  if(e <= 0)
    return ESCREVER;

  e = fwrite(&pos, 1, sizeof(int), f);
  if(e <= 0)
    return ESCREVER;

  e = fclose(f);
  if(e != 0)
    return FECHAR;

  return OK;
}

Erro carregar(Tarefa tarefas[], int total, int *pos) {
  FILE *f = fopen("tarefas", "rb");
  if(f == NULL)
    return ABRIR;

  int e = fread(tarefas, total, sizeof(Tarefa), f);
  if(e <= 0)
    return LER;

  e = fread(pos, 1, sizeof(int), f);
  if(e <= 0)
    return LER;

  e = fclose(f);
  if(e != 0)
    return FECHAR;

  return OK;
}

void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}