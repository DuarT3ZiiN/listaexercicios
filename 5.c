#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int x1, x2, y1, y2, xT, yT, potenciaX, potenciaY, potenciaT;
    float total;

    printf("Digite o primeiro valor de x: ");
    scanf("%d", &x1);
    printf("\nDigite o segundo valor de x: ");
    scanf("%d", &x2);
    printf("Digite o primeiro valor de y: ");
    scanf("%d", &y1);
    printf("\nDigite o segundo valor de y: ");
    scanf("%d", &y2);

    xT = x2 - x1;
    yT = y2 - y1;
    potenciaX = pow(xT, 2);
    potenciaY = pow(yT, 2);
    potenciaT = potenciaX + potenciaY;
    total = sqrt(potenciaT);

    printf("\n\nO valor da distancia e %.4f", total);
}