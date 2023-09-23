#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int contadorGeral = 0, variavelFilhos, numFilhos, opcao, mediaFilhos, contadorSalarioMaior = 0;
    float salario, porcentagemSalario, variavelSalario, mediaSalariop;
    do
    {
        contadorGeral++;
        fflush(stdin);
        do
        {
            printf("\nDigite numero de filhos \n:");
            scanf("%d", &numFilhos);
            variavelFilhos += numFilhos;
            fflush(stdin);
            if (numFilhos < 0)
            {
                printf("\nOpcao invalida. Digite novamente");
            }

        } while (numFilhos < 0);

        do
        {
            printf("\nDigite o seu salario\n:");
            scanf("%f", &salario);
            variavelSalario += salario;
            fflush(stdin);
            if (salario >= 100.00)
            {
                contadorSalarioMaior++;
            }
            if (salario < 0)
            {
                printf("\nOpcao invalida. Digite novamente");
            }

        } while (salario < 0);

        printf("\nDigite -1 para parar ou 0 para continuar \n:");
        scanf("%d", &opcao);

    } while (opcao != -1);

    mediaSalariop = variavelSalario / (float)contadorGeral;
    mediaFilhos = variavelFilhos / contadorGeral;
    porcentagemSalario = contadorSalarioMaior * 100 / contadorGeral;

    printf("\nA media de salario por pessoa:%f", mediaSalariop);
    printf("\nA media de filhos:%d", mediaFilhos);
    printf("\nPorcentagem de pessoas com salario acima de 100 reais:%f", porcentagemSalario);
}