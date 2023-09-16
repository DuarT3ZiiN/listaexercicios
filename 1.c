#include <stdio.h>
#include <math.h>

main()
{
    float resultado, x, raiz, potencia, potencia2;

    printf("Qual e o valor X?");
    scanf("%f", &x);
potencia = pow(x,2);
potencia2 = potencia - 16;
raiz = sqrt(potencia2);
resultado = (((x * 5) + 3) / raiz);

printf("\nEsse e o resultado: %2.f", resultado);

}
