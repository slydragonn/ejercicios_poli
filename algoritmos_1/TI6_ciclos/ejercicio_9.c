#include <stdio.h>
#include <math.h>

void calcularElementos(int);

void main()
{
  int num;

  printf("Digite el # de elementos a calcular:\n");
  scanf("%d", &num);

  calcularElementos(num);
}

void calcularElementos(int n)
{
  float elemento;

  for(int con = 1; con <= n; con++)
  {
    printf("Digite un número:\n");
    scanf("%f", &elemento);

    if(elemento < 0)
    {
      printf("%.2f\n", pow(elemento, 3));
    }
    else
    {
      if(elemento >= 0 && elemento <= 100)
      {
        printf("%.2f\n", pow(elemento, 2));
      }
      else
      {
        if(elemento > 100 && elemento <= 1000)
        {
          printf("%.2f\n", sqrt(elemento));
        }
        else
        {
          printf("# fuera de rango\n");
        }
      }
    }
  }
}
