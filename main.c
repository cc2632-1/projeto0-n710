#include <stdio.h>

int main(){
  printf("\nLista de Tarefas\n");

  int opcao;

  do{
    printf("\nMenu Principal:\n\n");
    printf("1. Adicionar Tarefa\n");
    printf("2. Deletar Tarefa\n");
    printf("3. Listar Tarefas\n");
    printf("0. Sair\n");

    printf("\nDigite o número da opção desejada:\n");
    int i = scanf("%d", &opcao);

    switch(opcao){
      case 1:
        printf("\nAdicionar Tarefa\n");
        break;
      case 2:
        printf("\nDeletar Tarefa\n");
        break;
      case 3:
        printf("\nListar Tarefas\n");
        break;
    }
  } while(opcao != 0);
}