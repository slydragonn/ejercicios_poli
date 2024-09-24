#include <stdio.h>

int sumarPares();

void main()
{
  int sum;

  sum = sumarPares();

  printf("El total de la suma de # pares entre el -15 al 2000 es: %d\n", sum);
}

int sumarPares()
{
  int sumPares = 0;

  for(int contador = -15; contador <= 2000; contador++)
  {
    if(contador % 2 == 0)
    {
      sumPares = sumPares + contador;
    }
  }

  return sumPares;
}
