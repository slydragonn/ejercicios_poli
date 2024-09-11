#include <stdio.h>

main()
{
    int num1, num2;
    
    printf("Digite dos números: \n");
    scanf("%d %d", &num1, &num2);
    
    if(num1 > 0 && num2 > 0 || num1 < 0 && num2 < 0 || num1 == 0 || num2 == 0)
    {
        printf("Los números no cumplen las condiciones para mostrarse");
    }
    else
    {
        printf("Los números son: %d y %d", num1, num2);
    }
}
