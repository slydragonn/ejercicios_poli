/*
 Dado un capital inicial P equivalente a $800.000, se desea encontrar el valor futuro
F para las siguientes tasas de interés (i1=0.02, i2=0.08) con períodos (n1= 5,
n2=13) respectivamente.
Tenga en cuenta que: F = P(1 + i)n
Donde:
F = valor futuro
P = capital inicial
n = períodos
i = tasa de interés
https://www.sandramateus.com/programacion/recursos/TI4_Subprogramas.pdf
*/

#include <stdio.h>

float calcularTasa(float, float, float);

void main()
{
  float p = 800000, i1 = 0.02, i2 = 0.08, n1 = 5, n2 = 13, f1, f2;

  f1 = calcularTasa(p, i1, n1);
  f2 = calcularTasa(p, i2, n2);

  printf("El valor futuro para las tasas de interés equivalen a:\n1. %.2f\n2. %.2f\n", f1, f2);
}

float calcularTasa(float capital, float interes, float periodo)
{
  float f;

  f = capital * (1 + interes) * periodo;

  return f;
}
