#include <stdio.h>
#include "functions.h"

void showGreetingsHeader();
void showHeader();
void showMenuOptions();
void showExitMessage();
void doAction(int opcao);
int getOption();


int main(void) {
  int opcao;
  
  showGreetingsHeader();
  showMenuOptions();
  opcao = getOption();
  doAction(opcao);
  
  while(opcao != 4) {
    showHeader();
    showMenuOptions();
    opcao = getOption();
    doAction(opcao);
  };
  
  return 0;
}

void showGreetingsHeader() {
  printf("Bem-vindo, operador. ");
  showHeader();
}

void showHeader() {
  printf("Qual operação deseja efetuar?\n");
}

void showMenuOptions() {
 printf("\n1. Listar salas\n");
 printf("2. Efetuar registro\n");
 printf("3. Cancelar registro\n");
 printf("4. Sair\n\n");
 printf("Obs: Digite algum número entre 1 e 4, para tomada de decisão.\n\n");
 printf("Opção: ");
}

int getOption() {
  int opcao;

  scanf("%d", &opcao);
  
  while(opcao < 1 || opcao > 4) {
    printf("Opção inválida. Digite um número entre 1 e 4.");
    scanf("%d", &opcao);
  } 

  return opcao;
}

void showExitMessage() {
  printf("exitMessage: TODO\n");
}

void doAction(int opcao) {
  switch(opcao) {
    case 1: {
      listRooms();
      break;
    } 
    case 2: {
      saveRecord();
      break;
    } 
    case 3: {
      cancelRecord();
      break;
    } 
    case 4: {
      showExitMessage();
      break;
    } default: {
      printf("Operação inválida.");      
    } 
  }
}