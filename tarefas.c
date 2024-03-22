#include <stdio.h>
#include "tarefas.h"
#include <string.h>

int criar(Tarefa tarefas[], int *pos){
  if(*pos >= TOTAL)
    return 1;

  printf("Entre com a prioridade: ");
  scanf("%d", &tarefas[*pos].prioridade);
  clearBuffer();
  printf("Entre com a categoria: ");
  fgets(tarefas[*pos].categoria, 100, stdin);
  printf("Entre com a descrição: ");
  fgets(tarefas[*pos].descricao, 300, stdin);
  

  *pos += 1;

  return 0;
}

int deletar(Tarefa tarefas[], int *pos){
  
  return 0;
}

int listar(Tarefa tarefas[], int pos){
  if(pos == 0)
    return 1;
  
  for (int i=0; i<pos; i++){
    printf("Pos: %d\t", i+1);
    printf("Prioridade: %d\t", tarefas[i].prioridade);
    printf("Categoia: %s\t", tarefas[i].categoria);
    printf("Descricao: %s\n", tarefas[i].descricao);
  }

  return 0;
}

int salvar(Tarefa tarefas[], int total, int pos){
  printf("Função de salvar tarefas\n");
  return 0;
}

int carregar(Tarefa tarefas[], int total, int pos){
  printf("Função de carregar tarefas\n");
  return 0;
}

void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}