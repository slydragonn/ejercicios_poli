#include <stdio.h>

int calcularFactorial(int);

void main()
{
  int num, resultado;

  printf("Digite un número positivo para calcular su factorial\n");
  scanf("%d", &num);

  resultado = calcularFactorial(num);

  if(resultado == -1)
  {
    printf("El número dado es invalido\n");
  }
  else
  {
    printf("El factorial de %d es: %d\n", num, resultado);

  }
}

int calcularFactorial(int numero)
{
  int factorial = numero;

  if(numero > 0)
  {
    for(int contador = numero - 1; contador >= 1; contador--)
    {
      factorial *= contador;
    }

    return factorial;
  }
  
  return -1;
}
