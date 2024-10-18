#include <iostream>
using namespace std;

void llenarConMultiplosDeTres(int *);
int sumarMultiplos(int *);

int main()
{
  int multiplos3[10] = {0};
  int suma;

  llenarConMultiplosDeTres(multiplos3);
  suma = sumarMultiplos(multiplos3);

  cout << "La suma de los multiplos de 3 es: " << suma << endl;
}

void llenarConMultiplosDeTres(int *multiplos)
{
  int multiplo = 3;

  for(int i = 0; i < 10; i++)
  {
    cout << "Multiplo: " << multiplo << endl;
    multiplos[i] = multiplo;
    multiplo += 3;
  }
}

int sumarMultiplos(int *multiplos)
{
  int resultado = 0;

  for(int i = 0; i < 10; i++)
  {
    resultado += multiplos[i];
  }

  return resultado;
}
