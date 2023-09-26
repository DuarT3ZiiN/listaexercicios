#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int ddd, opcao, mediaVeiculosCidade, mediaAcidenteCidade, carros = 23583393, contadorAcidentes;
    char e[40];
    do
    {
        printf("Qual e o seu DDD?:");
        scanf("%d", &ddd);

        switch (ddd)
        {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            printf("\nSua cidade e do Estado de Sao Paulo ");
            strcpy(e, "Sao Paulo");
            contadorAcidentes = 169618;
            break;
        case 21:
        case 22:
        case 24:
            printf("\nSua cidade e do Estado do Rio de Janeiro ");
            strcpy(e, "Rio de Janeiro");
            contadorAcidentes = 40697;
            break;
        case 27:
        case 28:
            printf("\nSua cidade e do Estado do Espitito Santo ");
            strcpy(e, "Espirito Santo");
            contadorAcidentes = 4925;
            break;
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 37:
        case 38:
            printf("\nSua cidade e do Estado de Minas Gerais ");
            strcpy(e, "Minas Gerais");
            contadorAcidentes = 33802;
            break;
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
            printf("\nSua cidade e do Estado do Parana ");
            strcpy(e, "Parana");
            contadorAcidentes = 24675;
            break;
        case 47:
        case 48:
        case 49:
            printf("\nSua cidade e do Estado de Santa Catarina ");
            strcpy(e, "Santa Catarina");
            contadorAcidentes = 16169;
            break;
        case 51:
        case 53:
        case 54:
        case 55:
            printf("\nSua cidade e do Estado do Rio Grande do Sul ");
            strcpy(e, "Rio Grande do Sul");
            contadorAcidentes = 32662;
            break;
        case 61:
            printf("\nVoce e do Distrito Federal ");
            strcpy(e, "Distrito Federal");
            contadorAcidentes = 9102;
            break;
        case 62:
        case 64:
            printf("\nSua cidade e do Estado do Goias ");
            strcpy(e, "Goias");
            contadorAcidentes = 8263;
            break;
        case 63:
            printf("\nSua cidade e do Tocantins");
            strcpy(e, "Tocantins");
            contadorAcidentes = 209;
            break;
        case 65:
        case 66:
            printf("\nSua cidade e do Estado do Mato Grosso");
            strcpy(e, "Mato Grosso");
            contadorAcidentes = 2332;
            break;
        case 67:
            printf("\nSua cidade e do Estado do Mato Grosso do Sul");
            strcpy(e, "Mato Grosso do Sul");
            contadorAcidentes = 4352;
            mediaAcidenteCidade = contadorAcidentes / 427;
            break;
        case 68:
            printf("\nSua cidade e do Estado do Acre");
            strcpy(e, "Acre");
            contadorAcidentes = 251;
            break;
        case 69:
            printf("\nSua cidade e do Estado de Rondonia");
            strcpy(e, "Rondonia");
            contadorAcidentes = 3196;
            break;
        case 71:
        case 73:
        case 74:
        case 75:
        case 77:
            printf("\nSua cidade e do Estado da Bahia");
            strcpy(e, "Bahia");
            contadorAcidentes = 9731;
            break;
        case 79:
            printf("\nSua cidade e do Estado de Sergipe");
            strcpy(e, "Sergipe");
            contadorAcidentes = 2164;
            break;
        case 81:
        case 87:
            printf("\nSua cidade e do Estado do Pernambuco");
            strcpy(e, "Pernambuco");
            contadorAcidentes = 6803;
            break;
        case 82:
            printf("\nSua cidade e do Estado de Alagoas");
            strcpy(e, "Alagoas");
            contadorAcidentes = 3905;
            break;
        case 83:
            printf("\nSua cidade e do Estado da Paraiba");
            strcpy(e, "Paraiba");
            contadorAcidentes = 1136;
            break;
        case 84:
            printf("\nSua cidade e do Estado do Rio Grande do Norte");
            strcpy(e, "Rio Grande do Norte");
            contadorAcidentes = 1825;
            break;
        case 85:
        case 88:
            printf("\nSua cidade e do Estado do Ceara");
            strcpy(e, "Ceara");
            contadorAcidentes = 3238;
            break;
        case 86:
        case 89:
            printf("\nSua cidade e do Estado do Piaui");
            strcpy(e, "Piaui");
            contadorAcidentes = 1034;
            break;
        case 91:
        case 93:
        case 94:
            printf("\nSua cidade e do Estado do Para");
            strcpy(e, "Para");
            contadorAcidentes = 3024;
            break;
        case 92:
        case 97:
            printf("\nSua cidade e do Estado do Amazonas");
            strcpy(e, "Amazonas");
            contadorAcidentes = 1633;
            break;
        case 95:
            printf("\nSua cidade e do Estado de Roraima");
            strcpy(e, "Roraima");
            contadorAcidentes = 882;
            break;
        case 96:
            printf("\nSua cidade e do Estado do Amapa");
            strcpy(e, "Amapa");
            contadorAcidentes = 396;
            break;
        case 98:
        case 99:
            printf("\nSua cidade e do Estado do Maranhao");
            strcpy(e, "Maranhao");
            contadorAcidentes = 1046;
            break;
        }
        printf("\nDigite -1 para parar ou 0 para continuar \n:");
        scanf("%d", &opcao);

    } while (opcao != -1);

    mediaVeiculosCidade = carros / 27;



printf("\nVoce e do: %s ", e);
    printf("\n o maior e o menor indice de acidentes de transito e a que cidades pertencem respectivamente a \n\nSao Paulo: 169618 Acidentes \n e Tocantins: 209 acidentes");
    printf("\nA media de veiculos pro cidade em 1992 e: %d", mediaVeiculosCidade);
    printf("\nA media de acidentes com vitima entre as cidades do Rio Grande do Sul e: %d", mediaAcidenteCidade);

}