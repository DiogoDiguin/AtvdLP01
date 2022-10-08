#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetGeral[10];
    int vetPar[5], vetImpar[5];
    int i, x = 0, y = 0;

//Atribuição de valores ao VETOR GERAL
    for(i = 0; i < 10; i++){
        printf("Informe um valor para o GERAL: ");
        scanf("%i", &vetGeral[i]);
    }

//Atribuição de valores ao VETORES PAR e IMPAR
    for(i = 0; i < 10; i++){
        if(i % 2 == 0){
            vetPar[x] = vetGeral[i];
            x = x + 1;
        }else{
            vetImpar[y] = vetGeral[i];
            y = y + 1;
        }
    }

//Exibição do VETOR GERAL
    printf("\n");
    printf("Vetor GERAL\n");
    for(i = 0; i < 10; i++){
        printf(" %i .", vetGeral[i]);
    }
    printf("\n\n");

//Exibição do VETOR PAR
    printf("Vetor PAR\n");
    for(i = 0; i < 5; i++){
        printf(" %i .", vetPar[i]);
    }
    printf("\n");

//Exibição do VETOR IMPAR
    printf("Vetor IMPAR\n");
    for(i = 0; i < 5; i++){
        printf(" %i .", vetImpar[i]);
    }
    printf("\n");

    return 0;
}
