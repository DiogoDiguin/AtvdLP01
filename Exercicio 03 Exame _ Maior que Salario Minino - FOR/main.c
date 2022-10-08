#include <stdio.h>
#include <stdlib.h>

int main()
{
    float renda[100];
    float salario;
    int i;

//Atribuição dos valores
    for(i = 0; i < 100; i++){
        printf("Pessoa %i, digite a renda: R$", i);
        scanf("%f", &renda[i]);
    }

//Especificação do salário mínimo
    printf("\nDigite o salario minimo: R$");
    scanf("%f", &salario);
    printf("\n");

//Exibição condicional dos resultados
    printf("Rendas MAIORES que o salario minimo\n\n");
    for(i = 0; i < 100; i++){
        if(renda[i] > salario){
            printf("%.2f, referente a pessoa N %i\n" , renda[i], i);
        }
    }

    return 0;

}
