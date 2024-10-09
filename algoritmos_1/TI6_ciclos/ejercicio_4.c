#include <stdio.h>

void main()
{
  int voto;
  int votar = 1;
  int votosPedro = 0;
  int votosPablo = 0;
  int votosMartha = 0;
  int votosJuan = 0;
  int votosEnBlanco = 0;
  int votosGanador = 0;
  int idGanador = 0;

  while(votar == 1)
  {
    printf("Digite un número para vota por uno de los siguientes candidatos:\n1. Pedro\n2. Pablo\n3. Martha\n4. Juan\n5. Voto en Blanco\n");
    scanf("%d", &voto);

    switch(voto)
    {
      case 1: votosPedro++;
              if(votosPedro > votosGanador)
              {
                votosGanador = votosPedro;
                idGanador = 1;
              }
              break;
      case 2: votosPablo++;
              if(votosPablo > votosGanador)
              {
                votosGanador = votosPablo;
                idGanador = 2;
              }
              break;
      case 3: votosMartha++;
              if(votosMartha > votosGanador)
              {
                votosGanador = votosMartha;
                idGanador = 3;
              }
              break;
      case 4: votosJuan++;
              if(votosJuan > votosGanador)
              {
                votosGanador = votosJuan;
                idGanador = 4;
              }
              break;
      case 5: votosEnBlanco++;
              if(votosEnBlanco > votosGanador)
              {
                votosGanador = votosEnBlanco;
                idGanador = 5;
              }
              break;
      default: printf("Valor inválido\n");
    }

    printf("Digite:\n1. Para continuar\n2. Para finalizar\n");
    scanf("%d", &votar);
  }

  switch(idGanador)
  {
    case 1: printf("Pedro es el ganador\n");
            break;
    case 2: printf("Pablo es el ganador\n");
            break;
    case 3: printf("Martha es la ganadora\n");
            break;
    case 4: printf("Juan es el ganador\n");
            break;
    case 5: printf("Gano el voto en Blanco\n");
            break;
    default: printf("Error\n");
  }

  printf("- Pedro: %d\n- Pablo: %d\n- Martha: %d\n- Juan: %d\n- Voto en blanco: %d\n", votosPedro, votosPablo, votosMartha, votosJuan, votosEnBlanco);

  printf("Total de personas que votaron: %d\n", votosPedro + votosPablo + votosMartha + votosJuan + votosEnBlanco);
}
