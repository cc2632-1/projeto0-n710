// git pull origin 1-menu-principal
// git push origin 1-menu-principal
// git fetch origin
// git checkout 1-menu-principal
#include <stdio.h>

int main (){
  int opcao;
  do{
  printf("======================\n");
  printf("Menu Principal\n");
  printf("======================\n");
  printf("1 - Criar Tarefa\n");
  printf("2 - Deletar Tarefas\n");
  printf("3 - Listar Tarefas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opção: \n");
  int i = scanf("%d", &opcao);
  printf("Opção escolhida: %d\n", opcao) ;
  printf("======================\n");
  } while (opcao != 0);
}