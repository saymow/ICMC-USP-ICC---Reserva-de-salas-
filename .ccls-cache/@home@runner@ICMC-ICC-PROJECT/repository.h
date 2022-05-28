typedef struct {
  int Id;
  char *Nome;
  int Data[3];
  float Horario;
  float Duracao;
  float ValorBase;
  int Ocupacao;
  int Linhas;
  int Colunas;
  int EspacoTotal;
  int **Matriz; 
} Room;

Room *getRooms();