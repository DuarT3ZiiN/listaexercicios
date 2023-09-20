#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{

    int ladoa, ladob, ladoc;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &ladoa);
    printf("\nDigite o segundo angulo: ");
    scanf("%d", &ladob);
    printf("\nDigite o terceiro angulo: ");
    scanf("%d", &ladoc);

    if (ladoa + ladob > ladoc && ladoa + ladoc > ladob && ladob + ladoc > ladoa)
    {
        printf("\nOs 3 lados formam um triangulo !");
        if (ladoa == ladob && ladoa == ladoc)
        {
            printf("\nRetangulo!");
        }
        else if (ladoa == ladob || ladoa == ladoc || ladob == ladoc)
        {
            printf("\nAcutangulo!");
        }
        else
            printf("\nObtusangulo!");
    }
    else
        printf("\nOs 3 lados NAO formam um triangulo!");
}