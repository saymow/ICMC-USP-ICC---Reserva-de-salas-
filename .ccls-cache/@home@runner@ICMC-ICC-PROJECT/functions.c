#include<stdio.h>
#include<stdlib.h>
#include "repository.h"

void listRooms() {
  Room *rooms = getRooms();

  printf("\nSegue as salas detalhadas: \n\n");
  
  printf("1°) Id: %d\n", rooms[0].Id);
  printf("Nome: %s\n", rooms[0].Nome);
  printf("Data: %d/%d/%d\n", rooms[0].Data[0], rooms[0].Data[1], rooms[0].Data[2]);
  printf("Horário: %.2f\n", rooms[0].Horario);
  printf("Duração: %.2f\n", rooms[0].Duracao);
  printf("Valor base: %.2f\n", rooms[0].ValorBase);
  printf("Ocupação: %d\n\n", rooms[0].Ocupacao);

  for (int i = 0; i < rooms[0].Linhas - 1; i++) {
    printf("| ");
    for (int j = 0; j < rooms[0].Colunas; j++) {
      if (rooms[0].Matriz[i][j] == 1) printf("x");
      else printf(" ");
      printf(" | ");
    }
    printf("\n");
  }

  printf("\n");

  free(rooms);
};

void saveRecord() {
  printf("\nsaveRecord: TODO\n");
};

void cancelRecord() {
  printf("\ncancelRecord: TODO\n");
};
