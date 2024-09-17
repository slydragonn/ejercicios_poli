#include <stdio.h>

float calcularPrecio(int, float);

void main()
{
  int numManzanas;
  float precioManzana, precioTotal;

  printf("Digite el número de Manzanas compradas: ");
  scanf("%d", &numManzanas);
  printf("\nDigite el precio de cada Manzana: ");
  scanf("%f", &precioManzana);

  precioTotal = calcularPrecio(numManzanas, precioManzana);

  printf("El valor total a pagar es: %.2f\n", precioTotal);
}

float calcularPrecio(int numUnidades, float precioUnidad)
{
  float resultado = precioUnidad * numUnidades;

  if(numUnidades > 2 && numUnidades <= 5)
  {
    resultado = resultado - resultado * 0.10;
  }
  else
  {
    if(numUnidades > 5 && numUnidades <= 10)
    {
      resultado = resultado - resultado * 0.15;
    }
    else
    {
      if(numUnidades > 10)
      {
        resultado = resultado - resultado * 0.20;
      }
    }
  }

  return resultado;
}
