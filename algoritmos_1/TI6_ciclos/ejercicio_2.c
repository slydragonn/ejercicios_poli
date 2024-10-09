#include <stdio.h>
#include <math.h>

float serie(float);

void main()
{
  float numx, resultado;

  printf("Digite el valor de X, para determinar el valor de F(X) de la serie\n");
  scanf("%f", &numx);

  resultado = serie(numx);

  printf("Para X = %f, el valor de F(X) = %f\n", numx, resultado);
}

float serie(float x)
{
  float fx = 0, i = 0, fac = 1, ter = 1;

  while(i < x)
  {
    fx = fx + ter;
    i++;
    fac *= i;
    ter = pow(x, i) / (fac * pow(-1, i));
  }

  return fx + ter;
}
