#include <stdio.h>

void llenarConMultiplosDeTres(int[]);
int sumarMultiplos(int[]);

void main()
{
  int multiplos3[10] = {0};
  int suma;

  llenarConMultiplosDeTres(multiplos3);
  suma = sumarMultiplos(multiplos3);

  printf("La suma de los multiplos de 3 es: %d\n", suma);
}

void llenarConMultiplosDeTres(int multiplos[])
{
  int multiplo = 3;

  for(int i = 0; i < 10; i++)
  {
    printf("Multiplo: %d\n", multiplo);
    multiplos[i] = multiplo;
    multiplo += 3;
  }
}

int sumarMultiplos(int multiplos[])
{
  int resultado = 0;

  for(int i = 0; i < 10; i++)
  {
    printf("Elemento: %d\n", multiplos[i]);
    resultado += multiplos[i];
  }

  return resultado;
}
