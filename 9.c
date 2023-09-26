#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votonulo = 0, votobranco = 0, opcao;

    do
    {
        printf("Qual e o seu voto?\n\n 1-> Tancredo Neves\n 2-> Marina Silva \n 3-> Getulio Vargas \n 4-> Deodoro da Fonseca \n 5-> Voto nulo \n 6-> Voto em Branco\n:");
        scanf("%d", &voto);

        switch (voto)
        {
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
            candidato3++;
            break;
        case 4:
            candidato4++;
            break;
        case 5:
            votonulo++;
            break;
        case 6:
            votobranco++;
            break;
        }

        printf("\nDigite -1 para parar ou 0 para continuar \n:");
        scanf("%d", &opcao);

    } while (opcao != -1);

    printf("\nResumo de votos: \nTancredo Neves: %d \nMarina Silva: %d\nGetulio Vargas: %d \nDeodoro da Fonseca: %d\nVotos nulos: %d\nVotos em branco: %d", candidato1, candidato2, candidato3, candidato4, votonulo, votobranco);
}