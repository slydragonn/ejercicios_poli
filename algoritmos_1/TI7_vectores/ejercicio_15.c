#include <stdio.h>

void llenar(int *, int);
void mostrar(int *, int);
void bus_sec(int *, int, int);
void copiar_vector_pos_impares(int *, int *, int);
void contar_mult_tres_positivos(int *, int);

void main()
{
  int vec[125] = {0};
  int vec2[125] = {0};
  int N = 10;
  int num_bus;

  llenar(vec, N);
  mostrar(vec, N);

  printf("Digite un # para buscar:\n");
  scanf("%d", &num_bus);
  bus_sec(vec, N, num_bus);

  copiar_vector_pos_impares(vec, vec2, N);
  mostrar(vec2, N);

  contar_mult_tres_positivos(vec2, N);
}

void llenar(int *vector, int n)
{
  int i, num;

  for(i = 0; i <= n - 1; i++)
  {
    printf("Digite un #\n");
    scanf("%d", &num);
    vector[i] = num;
  }
}

void mostrar(int *vector, int n)
{
  int i;

  for(i = 0; i <= n - 1; i++)
  {
    printf("%d\t", vector[i]);
  }
}

void bus_sec(int *vector, int n, int num)
{
  int i = 0;

  while(i < n && num != vector[i])
  {
    i++;
  }

  if(i < n)
  {
    printf("El valor %d esta en: %d\n", num, i);
  }
  else
  {
    printf("El valor no se encuentra en el vector\n");
  }
}

void copiar_vector_pos_impares(int *vector, int *vector2, int n)
{
  int i, j = 0;

  for(i = 0; i <= n - 1; i++)
  {
    if(i % 2 != 0)
    {
      vector2[j] = vector[i];
      j++;
    }
  }
}


void contar_mult_tres_positivos(int *vector, int n)
{
  int i, cont = 0;

  for(i = 0; i <= n - 1; i++)
  {
    if(vector[i] % 3 == 0 && vector[i] > 0)
    {
      cont++;
    }
  }

  printf("El total de elementos mult de 3 positivos: %d\n", cont);
}
