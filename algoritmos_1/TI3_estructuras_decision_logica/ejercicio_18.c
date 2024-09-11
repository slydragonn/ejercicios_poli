#include <stdio.h>

main()
{
    float valorInvertido, tasaInteres, ganancias;
    
    printf("Digite el valor invertido y la tasa de interes (1 al 100)");
    scanf("%f %f", &valorInvertido, &tasaInteres);
    
    if(valorInvertido > 100000.00 && valorInvertido < 900000.00)
    {
        ganancias = valorInvertido * (tasaInteres / 100) + valorInvertido;
        
        printf("Al final tendra $%.2f", ganancias);
    }
    else
    {
        printf("Al final tendra $%.2f", valorInvertido);
    }
}
