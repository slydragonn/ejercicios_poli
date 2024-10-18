#include <iostream>
using namespace std;

void llenar(int, int *);
void mostrar(int, int *);
void invertir(int *, int *, int);

int main()
{
  int N;
  int S[100] = {0};
  int SI[100] = {0};

  cout << "Digite el # de elementos del vector: " << endl;
  cin >> N;

  llenar(N, S);

  mostrar(N, S);
  invertir(S, SI, N);
  mostrar(N, SI);
}

void llenar(int n, int *vector)
{
  for(int i = 0; i <= n - 1; i++)
  {
    cout << "Digite un #: " << endl;
    cin >> vector[i];
  }
}

void mostrar(int n, int *vector)
{
  for(int i = 0; i <= n - 1; i++)
  {
    cout << vector[i] << "\t";
  }
  cout << endl;
}

void invertir(int *vector, int *nuevoVector, int n)
{
  int cont = 0;
  int contI = n - 1;

  while(contI >= 0)
  {
    nuevoVector[cont] = vector[contI];
    contI--;
    cont++;
  }
}
