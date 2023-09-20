#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\nOs 3 lados formam um triangulo!");
        if (a == b && a == c)
        {
            printf("\nEquilatero!");
        }
        else if (a == b || a == c || b == c)
        {
            printf("\nIsosceles!");
        }
        else
            printf("\nEscaleno!");
    }
    else
        printf("\nOs 3 lados NAO formam um triangulo!");
}