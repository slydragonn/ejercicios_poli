/*
Determinar el valor total a pagar por una llamada telefónica, de acuerdo a lo
siguiente:
- Toda llamada que dure menos de tres minutos, tiene un costo de $500.
- Cada minuto adicional-local a partir de los tres primeros, tiene un costo de $200.
- Cada minuto adicional-nacional a partir de los tres primeros, tiene un costo de
$300.

Ejercicio de: https://www.sandramateus.com/programacion/recursos/TI4_Subprogramas.pdf
*/

#include <stdio.h>

int obtenerCosteLlamada(int minutos, char tipoLlamada);

void main()
{
  int min, costeLlamada = 0;
  char tipo;

  printf("¿Cuál es el tipo de llamada?:\nDigite (l) para Local\nO (n) para Nacional\n");
  scanf("%c", &tipo);
  printf("Digite el número de minutos que tardó la llamada, Ejemplo: 4\n");
  scanf("%d", &min);

  if(tipo != 'n' && tipo != 'N' && tipo != 'l' && tipo != 'L')
  {
    printf("tipo de llamada invalido, tipo = %c\n", tipo);
  }
  else
  {
    costeLlamada = obtenerCosteLlamada(min, tipo);
    printf("El coste total de la llamada es: $%d\n", costeLlamada);
  }
}

int obtenerCosteLlamada(int minutos, char tipoLlamada)
{
  int costeTotal = 500;

  if(minutos > 3)
  {
    if(tipoLlamada == 'l' || tipoLlamada == 'L')
    {
      costeTotal = costeTotal + (minutos - 3) * 200;
    }
    else
    {
     costeTotal = costeTotal + (minutos - 3) * 300;
    }
  }
  
  return costeTotal;
}
