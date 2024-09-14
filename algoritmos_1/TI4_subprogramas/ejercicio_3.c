/*
 Lea los tres lados de un triángulo y determine el tipo de triángulo que forma:
equilátero, isósceles o escaleno.

https://www.sandramateus.com/programacion/recursos/TI4_Subprogramas.pdf
*/

#include <stdio.h>

void obtenerTipoTriangulo(float, float, float);

void main()
{
  float ladoA, ladoB, ladoC;

  printf("Digite el valor de tres lados: \n");
  scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

  obtenerTipoTriangulo(ladoA, ladoB, ladoC);
}

void obtenerTipoTriangulo(float a, float b, float c)
{
  if(a == b && b == c)
  {
    printf("Es un triángulo equilátero\n");
  }
  else
  {
    if(a == b || a == c || c == b)
    {
      printf("Es un triángulo isósceles\n");
    }
    else
    {
      printf("Es un triángulo escaleno\n");
    }
  }
}
