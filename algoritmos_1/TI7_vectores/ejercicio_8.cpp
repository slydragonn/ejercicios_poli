/*
 Se tiene un vector con las notas de un grupo de 30 estudiantes. Hallar y mostrar la
nota más alta y la más baja, cuántas personas perdieron y la nota promedio del grupo
 */
#include <iostream>
using namespace std;

void obtenerValores(int *, int);

int main()
{
  int n = 30;
  int notas[30] = {0};

  for(int i = 0; i <= n - 1; i++)
  {
    cout << "Digite una nota: " << endl;
    cin >> notas[i];
  }

  obtenerValorMax(notas, n);
}

void obtenerValores(int *vector, int N)
{
  int valorMax = vector[0];
  int valorMin = vector[0];
  int sum = 0;
  int promedio;

  for(int i = 0; i <= N - 1; i++)
  {
    if(vector[i] > valorMax)
    {
      valorMax = vector[i];
    }

    if(vector[i] < valorMin)
    {
      valorMin = vector[i];
    }

    sum += vector[i];
  }

  promedio = sum / N;

  cout << "Max: " << valorMax << "\t" << "Min: " << valorMin << endl;
  cout << "Promedio: " << promedio << endl;
}
