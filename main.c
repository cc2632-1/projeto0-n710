// git pull origin 1-menu-principal
// git push origin 1-menu-principal
// git fetch origin
// git checkout 1-menu-principal
#include "tarefas.h"
#include <stdio.h>

int main() {
  int pos = 0;
  Tarefa tarefas[TOTAL];

  int opcao;
  do {
    printf("======================\n");
    printf("Menu Principal\n");
    printf("======================\n");
    printf("1 - Criar Tarefa\n");
    printf("2 - Deletar Tarefas\n");
    printf("3 - Listar Tarefas\n");
    printf("0 - Sair\n");
    printf("Entre com uma opção: \n");
    int i = scanf("%d", &opcao);
    printf("Opção escolhida: %d\n", opcao);
    printf("======================\n");

    if (opcao == 1) {
      int erro = criar(tarefas, &pos);
    } else if (opcao == 2) {
      int erro = deletar(tarefas, &pos);
    } else if (opcao == 3) {
      int erro = listar(tarefas, pos);
    } else if (opcao == 0) {
      printf("Sair...\n");
    } else {
      printf("Opção inválida\n");
    }

  } while (opcao != 0);
}