#include <iostream>
using namespace std;

int matriz[50][50] = {0};

void llenar_matriz(int, int);
void diagonal_principal(int, int);

main()
{
  int F, C;
  
  cout << "Ingrese el # de Filas" << endl;
  cin >> F;

  cout << "Ingrese el # de Columnas" << endl;
  cin >> C;

  llenar_matriz(F, C);
  cout << "Diagonal Principal: " << endl;
  diagonal_principal(F, C);
}

void llenar_matriz(int fil, int col)
{
  int i, j;

  for(i = 0; i < fil; i++)
  {
    for(j = 0; j < col; j++)
    {
      cout << "Ingrese un # random: ";
      cin >> matriz[i][j];
    }
    cout << endl;
  }
  cout << endl;
}

void diagonal_principal(int fil, int col)
{
  int i;

  if(fil == col)
  {
    for(i = 0; i <= fil - 1; i++)
    {
      cout << matriz[i][i] << "\t";
    }
    cout << endl;
  }
  else
  {
    cout << "La matriz no es cuadrada" << endl;
  }
}
