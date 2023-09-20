#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while (chico >= ze)
    {
        chico += 0.02;
        ze += 0.03;
        ano++;

        printf("\nChico: %.2f \ntZe:%.2f \ntAno: %d", chico, ze, ano);
    }
    printf("\nSao necessarios %d anos!\n\n", ano);
}