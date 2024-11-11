#include <iostream>
using namespace std;

int matriz[50][50] = {0}, F, C;

void llenar();
void mostrar();
void encontrar_valor(int);

main()
{
  int valor;

  cout << "Digite el # de filas: " << endl;
  cin >> F;

  cout << "Digite el # de columnas: " << endl;
  cin >> C;

  cout << "Matriz de " << F * C << " elementos" << endl;

  llenar();
  cout << "La matriz es: " << endl;
  mostrar();

  cout << "Digite el valor a buscar: " << endl;
  cin >> valor;

  encontrar_valor(valor);
}

void llenar()
{
  int i, j;

  for(i = 0; i < F; i++)
  {
    for(j = 0; j < C; j++)
    {
      cout << "Digite un # random: " << endl;
      cin >> matriz[i][j];
    }
  }
}

void mostrar()
{
  int i, j;

  for(i = 0; i < F; i++)
  {
    for(j = 0; j < C; j++)
    {
      cout << matriz[i][j] << "\t";
    }
    cout << endl;
  }

  cout << endl;
}

void encontrar_valor(int num)
{
  int ban = 0, j = 0, i, posF, posC;

  while(j < C && ban == 0)
  {
    for(i = 0; i < F; i++)
    {
      cout << "Buscando el valor: " << num << endl << "En Columna: " << j << "\tFila: " << i << endl;
      if(matriz[i][j] == num)
      {
        posF = i;
        posC = j;
        ban = 1;
        break;
      }
    }
    j++;
  }

  if(ban == 0)
  {
    cout << "El elemento no se encuentra en la matriz" << endl;
  }
  else
  {
    cout << "El valor: " << num << " Esta en la fila: " << posF << " Y columna: " << posC << endl;
  }
}
