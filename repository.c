#include <stdlib.h>
#include "repository.h"

Room *getRooms() {
  Room *rooms = malloc(sizeof(Room) * 1);

  rooms[0].Id = 2761;
  rooms[0].Duracao = 1.25;
  rooms[0].Horario = 17.5;
  rooms[0].ValorBase = 50;
  rooms[0].Data[0] = 17;
  rooms[0].Data[1] = 06;
  rooms[0].Data[2] = 2022;
  rooms[0].Nome = "Um filme legal";
  rooms[0].Linhas = 5;
  rooms[0].Colunas = 5;
  rooms[0].EspacoTotal = rooms[0].Colunas * rooms[0].Linhas;
  rooms[0].Matriz = (int **) malloc(rooms[0].Linhas * sizeof(int));

  for (int i = 0; i < rooms[0].Linhas; i++) {
    rooms[0].Matriz[i] = (int *) malloc(rooms[0].Colunas * sizeof(int));
    for (int j = 0; j < rooms[0].Colunas; j++) {
      rooms[0].Matriz[i][j] = 0;
    }
  }

  rooms[0].Matriz[0][0] = 1;
  rooms[0].Matriz[0][1] = 1;
  rooms[0].Matriz[0][2] = 1;
  rooms[0].Matriz[0][3] = 1;
  rooms[0].Ocupacao = 4;

  return rooms;
}