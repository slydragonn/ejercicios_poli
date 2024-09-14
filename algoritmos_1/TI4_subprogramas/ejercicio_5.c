/*
 Elaborar un algoritmo para que calcule la nota definitiva de un estudiante de
Algoritmos y Programación 1. Se debe leer las siguientes notas: seguimiento del
50%, parcial1 del 25% y parcial2 del 25%; al final, debe imprimir un mensaje que
indique si ganó o perdió la materia.
https://www.sandramateus.com/programacion/recursos/TI4_Subprogramas.pdf
*/

#include <stdio.h>

void aproboMateria(float, float, float);

void main()
{
  float seguim, exam1, exam2;

  printf("Digite las notas del seguimiento, parcial 1 y parcial 2:\n");
  scanf("%f %f %f", &seguim, &exam1, &exam2);

  aproboMateria(seguim, exam1, exam2);
}

void aproboMateria(float seguimiento, float parcial1, float parcial2)
{
  float notaFinal;

  notaFinal = seguimiento * 0.5 + parcial1 * 0.25 + parcial2 * 0.25;

  if(notaFinal >= 3)
  {
    printf("Ganó la materia :) con: %.1f\n", notaFinal);
  }
  else
  {
    printf("Perdió la materia :( con: %.1f\n", notaFinal);
  }
}
