#include <iostream>
using namespace std;

int matriz[3][3] = {{8, 0, 0}, {0, 8, 0}, {0, 0, 8}};
int F = 3, C = 3;

void mostrar();
void es_escalar();

main()
{
  cout << "Matriz:" << endl;
  mostrar();

  es_escalar();
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

void es_escalar()
{
  int i = 0, j, ban = 1, aux;

  if(F == C)
  {
    aux = matriz[i][i];

    while(i < F && ban == 1)
    {
      if(matriz[i][i] == aux && aux != 0)
      {
        j = i + 1;
        while(j < C && ban == 1)
        {
          if(matriz[j][i] == 0 && matriz[i][j] == 0)
          {
            ban = 1;
          }
          else
          {
            ban = 0;
          }
          j += 1;
        }
      }
      else
      {
        ban = 0;
      }
      i += 1;
    }

    if(ban == 1)
    {
      cout << "La matriz es escalar" << endl;
    }
    else
    {
      cout << "La matriz no es escalar" << endl;
    }
  }
  else
  {
    cout << "La matriz no es cuadrada" << endl;
  }
}
