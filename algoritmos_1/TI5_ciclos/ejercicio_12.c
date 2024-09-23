#include <stdio.h>

void calcularAceleraciones(int numeroExp);

void main()
{
  int nExp;

  printf("Digite el número de Experimentos que desea realizar:\n");
  scanf("%d", &nExp);

  calcularAceleraciones(nExp);
}

void calcularAceleraciones(int numeroExp)
{
  float velInicial, velFinal, distancia;
  int numAcelerados = 0, numDesacelerados = 0, numEstaticos = 0;
  float acumAcelerados = 0, acumDesacelerados = 0, promedioAsc, promedioDes;
  float aceleracion;
  int contador = 1;

  while(contador <= numeroExp)
  {
    printf("Digite la vel. Inicial, vel. Final y la distancia:\n");
    scanf("%f %f %f", &velInicial, &velFinal, &distancia);

    aceleracion = (velFinal - velInicial) / distancia;
    printf("aceleracion: %f \n", aceleracion);

    if(aceleracion == 0)
    {
      numEstaticos = numEstaticos + 1;
    }
    else
    {
      if(aceleracion > 0)
      {
        numAcelerados = numAcelerados + 1;
        acumAcelerados = acumAcelerados + aceleracion;
      }
      else
      {
        if(aceleracion < 0)
        {
          numDesacelerados = numDesacelerados + 1;
          acumDesacelerados = acumDesacelerados + aceleracion;
        }
      }
    }

    contador = contador + 1;
  }

  promedioAsc = acumAcelerados / numAcelerados;
  promedioDes = acumDesacelerados / numDesacelerados;

  printf("El resultado de los calculos son:\n - # acelerados: %d\n - # desacelerados: %d\n - # estáticos: %d\n - Promedio Acelerados: %.2f\n - Promedio desacelerados: %.2f\n", numAcelerados, numDesacelerados, numEstaticos, promedioAsc, promedioDes);
}
