#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, x;
    float valor;

//Estipula��o da quantidade de �ndices
    printf("Quantidade de valores no vetor: ");
    scanf("%i", &x);

//Cria��o do vetor
    float vetor[x];

//Atribui��o dos valores ao vetor criado
    printf("\n");
    do{
        printf("Posicao %i do vetor: ", i);
        scanf("%f", &valor);
        if(valor > 0){
            vetor[i] = valor;
            i++;
        }else{
            printf("                Valor invalido.\n");
        }
    }while(i < x);

//Exibi��o do vetor
    printf("\n");
    for(i = x - 1; i >= 0; i--){
        printf(" %.2f .", vetor[i]);
    }
    printf("\n");
    return 0;
}
