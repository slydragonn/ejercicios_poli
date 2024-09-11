/*
 Leer un número entre 1 y 12 y luego, muestre un mensaje que indique el mes al que corresponde dicho número.

 Ejercicio de: https://www.sandramateus.com/programacion/recursos/TI4_Subprogramas.pdf

*/

#include <stdio.h>

void mostrarMes(int num); // prototipo de la funcion

void main()
{
  int numero;

  printf("Digite un número del 1 al 12 para mostrar el mes\n");
  scanf("%d", &numero);

  mostrarMes(numero); 

}

void mostrarMes(int num)
{
  switch(num)
  {
    case 1: printf("Enero\n");
            break;
    case 2: printf("Febrero\n");
            break;
    case 3: printf("Marzo\n");
            break;
    case 4: printf("Abril\n");
            break;
    case 5: printf("Mayo\n");
            break;
    case 6: printf("Junio\n");
            break;
    case 7: printf("Julio\n");
            break;
    case 8: printf("Agosto\n");
            break;
    case 9: printf("Septiembre\n");
            break;
    case 10: printf("Octubre\n");
            break;
    case 11: printf("Noviembre\n");
            break;
    case 12: printf("Diciembre\n");
            break;
    default: printf("# invalido\n");
  }
}

