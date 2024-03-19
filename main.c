#include "tarefas.h"
#include <stdio.h>

int main() {
  int pos = 0;
  Tarefa tarefas[TOTAL];

  int opcao;
  do {
    printf("\nMenu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefa\n");
    printf("3 - Listar tarefas\n");
    printf("0 - Sair\n");
    printf("Entre com uma opcao: ");
    int i = scanf("%d", &opcao);
    printf("Opcao escolhida: %d\n", opcao);
  } while (opcao != 0);
}