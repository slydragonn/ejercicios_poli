#include <iostream>
using namespace std;

int matriz[100][100] = {0};

void llenar(int, int);
void mult(int, int, int);
void mostrar(int, int);

main()
{
  int N, M, X;

  cout << "Digite el # de filas <= 100: " << endl;
  cin >> N;

  cout << "Digite el # de columnas <= 100: " << endl;
  cin >> M;

  cout << "La matriz tendra: " << N * M << " elementos." << endl;

  cout << "Digite el # a multiplicar cada elemento" << endl;
  cin >> X;

  cout << "Llenar la matriz: " << endl;
  llenar(N, M);

  cout << "Elementos de la matriz: " << endl;
  mostrar(N, M);

  mult(N, M, X);

  cout << endl << "Elementos de la matriz multiplicados por: " << X << endl;
  mostrar(N, M);
  cout << endl;

}

void llenar(int F, int C)
{
  int i, j;

  for(i = 0; i <= F - 1; i++)
  {
    for(j = 0; j <= C - 1; j++)
    {
      cout << endl << "Digite un # random: ";
      cin >> matriz[i][j];
    }
  }
}

void mult(int F, int C, int valor)
{
  int i, j;

  for(i = 0; i <= F - 1; i++)
  {
    for(j = 0; j <= C - 1; j++)
    {
      matriz[i][j] = matriz[i][j] * valor;
    }
  }
}

void mostrar(int F, int C)
{
  int i, j;

  for(i = 0; i <= F - 1; i++)
  {
    for(j = 0; j <= C - 1; j++)
    {
      cout << matriz[i][j] << "\t";
    }
  }
}
