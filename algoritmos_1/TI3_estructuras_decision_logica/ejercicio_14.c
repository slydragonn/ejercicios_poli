#include <stdio.h>

main()
{
    int horasUso, valorHora, totalPorPagar, descuento;
    
    printf("Digite el valor de la hora y las horas de uso: \n");
    scanf("%d %d", &valorHora, &horasUso);
    
    totalPorPagar = horasUso * valorHora;
    
    if(horasUso > 10)
    {
        descuento = (horasUso - 10) * valorHora * 0.20;
        totalPorPagar = totalPorPagar - descuento;
        
        printf("El total a pagar menos el descuento es: %d", totalPorPagar);
    }
    else
    {
        printf("El total a pagar es: %d", totalPorPagar);
    }
}