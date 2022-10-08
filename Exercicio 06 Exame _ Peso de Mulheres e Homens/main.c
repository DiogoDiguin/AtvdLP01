#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha = 1, sexo;
    float medMas, medFem;
    float pesoM = 0, pesoF = 0;
    float pesotM = 0, pesotF = 0;
    int quantMasc = 0, quantFem = 0;
    int i = 0;
    float maiorPeso, menorPeso;

/*LOOP para resposta afirmativa de
continuação de atribuição de valores*/
    while(escolha == 1){

//Informação da sexualidade do indivíduo
        printf("\nInforme sua sexualidade: ");
        printf("\nMasculino - 1 | Feminino - 2\n");
        printf("Sexualidade: ");
        scanf("%i", &sexo);

//Código para HOMENS
        if(sexo == 1){
            printf("\nHOMEM - Informe o seu peso: ");
            scanf("%f", &pesoM);
                if(i == 0){
                    maiorPeso = pesoM;
                    menorPeso = pesoM;
                    i++;
                }else if(pesoM > maiorPeso){
                    maiorPeso = pesoM;
                    i++;
                }else if(pesoM < menorPeso){
                    menorPeso = pesoM;
                    i++;
                }

            pesotM = pesotM + pesoM;
            quantMasc = quantMasc + 1;
//Código para MULHERES
        }else if(sexo == 2){
            printf("\nMULHER - Informe o seu peso: ");
            scanf("%f", &pesoF);
                if(i == 0){
                    maiorPeso = pesoF;
                    menorPeso = pesoF;
                    i++;
                }else if(pesoF > maiorPeso){
                    maiorPeso = pesoF;
                    i++;
                }else if(pesoF < menorPeso){
                    menorPeso = pesoF;
                    i++;
                }
            pesotF = pesotF + pesoF;
            quantFem = quantFem + 1;
        }else{
            printf("Valor invalido\n");
        }
//Pergunta para continuar inserindo indivíduos
    printf("\nDeseja inserir outra pessoa?\n");
    printf("1 - Sim / 0 - Nao\n");
    printf("                 Escolha: ");
    scanf("%i", &escolha);
}
//Cálculo da média entre os sexos
    medFem = pesotF / quantFem;
    medMas = pesotM / quantMasc;

//Exibição dos resultados
    printf("\n------------------------------\n");
    printf("\nMEDIAS DE PESO\n");
    printf("Masculino - %.2fKg \n", medMas);
    printf("Feminino - %.2fKg \n", medFem);
    printf("\n");
    printf("MAIOR peso registrado - %.2fKg \n", maiorPeso);
    printf("MENOR peso registrado - %.2fKg \n", menorPeso);

    return 0;
}
