#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int opcao ;
    float n1, n2 ,n3 , MP, contagemA = 0, MPT = 0;
    char nome;
  do{  
    contagemA++;
    printf("Quem e voce?");
    scanf("%c", &nome);
    fflush(stdin);
    printf("\nDigite a primeira nota : ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("\nDigite a segunda nota : ");
    scanf("%f", &n2);
    fflush(stdin);
    printf("\nDigite a trceira nota : ");
    scanf("%f", &n3);
    fflush(stdin);

    MP = ((n1 * 2) + (n2 * 4)+ ( n3 * 3)) / 10;

    MPT += MP / contagemA;

    if(MP >= 7){
        printf("\nVoce esta aprovado!");
        printf("\nEssa e a sua media %2.f", MP);
    }else{
    printf("\nVoce esta reprovado!");
    printf("\nEssa e a sua media %2.f", MP);
    }

    printf("\nA media da turma e: %2.f", MPT);
    printf("\nDigite -1 para parar ou 0 para cadastrar outro aluno \n:");
        scanf("%d", &opcao);
        fflush(stdin);


}while (opcao != -1);
}