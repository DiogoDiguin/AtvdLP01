#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha = 1, idade;
    int qtdIndividuo = 0;
    int vez = 0;

//Julgamento de pesquisa
    while(escolha == 1){
        vez++;

        printf("\nDigite a idade do estudante %i: ", vez);
        scanf("%i", &idade);

        if(idade >= 19 && idade <= 23){
            qtdIndividuo = qtdIndividuo + 1;
            printf("Estudante incluido na pesquisa com sucesso.\n");
        }else{
            printf("Idade nao e valida para a pesquisa.\n");
        }

        printf("\nDeseja continuar o preenchimento?\n");
        printf("[1] - SIM\n");
        printf("Decisao: ");
        scanf("%i", &escolha);

    }

//Exibição dos resultados
    printf("\nQuantidade de alunos entre 19 e 23 anos: %i\n", qtdIndividuo);
    return 0;
}
