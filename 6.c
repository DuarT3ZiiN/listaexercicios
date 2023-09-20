#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int x, y;

    printf("Digite o primeiro valor : ");
    scanf("%d", &x);
    printf("\nDigite o segundo valor : ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
    {
        printf("\nVoce esta no ponto 0");
    }
    else if (x > 0 && y > 0)
    {
        printf("\nVoce esta no primeiro quadrante");
    }
    else if (y > 0 && x < 0)
    {
        printf("\nVoce esta no segundo quadrante");
    }
    else if (y < 0 && x < 0)
    {
        printf("\nVoce esta no terceiro quadrante");
    }
    else if (y < 0 && x > 0)
        printf("\nVoce esta no quarto quadrante");
}