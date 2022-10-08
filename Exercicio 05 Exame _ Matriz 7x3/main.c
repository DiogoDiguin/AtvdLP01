#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[7][3];
    int i, j;
    int media, soma = 0, quantidade = 0;

//Atribui��o dos valores da MATRIZ
    for(i = 0; i < 7; i++){
        for(j = 0; j < 3; j++){
            printf("LINHA %i / COLUNA %i - Valor: ", i, j);
            scanf("%i", &matriz[i][j]);
            soma = soma + matriz[i][j];
            quantidade = quantidade + 1;
        }
    }

//Representa��o visual da matriz
    printf("\nRepresentacao da MATRIZ\n");
    for(i = 0; i < 7; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            if(matriz[i][j] < 10){
                printf("   0%i", matriz[i][j]);
            }else if(matriz[i][j] >= 100){
                printf("  %i", matriz[i][j]);
            }else{
            printf("   %i", matriz[i][j]);
            }
        }
    }

//C�lculo da m�dia
    media = soma / quantidade;

    printf("\n\nMedia dos valores\n");
    printf("%i / %i = %i", soma, quantidade, media);

//Exibi��o dos valores PARES e ACIMA DA M�DIA
    printf("\n---------------------------\n");
    printf("\nPARES e ACIMA DA MEDIA\n\n");
    for(i = 0; i < 7; i++){
        for(j = 0; j < 3; j++){
                if(matriz[i][j] % 2 == 0 && matriz[i][j] > media){
                    printf("%i, na linha %i e coluna %i\n", matriz[i][j], i, j);
                }
        }
    }

//Exibi��o dos valores IMPARES E ABAIXO DA M�DIA
    printf("\n---------------------------\n");
    printf("\nIMPARES e ABAIXO DA MEDIA\n\n");
    for(i = 0; i < 7; i++){
        for(j = 0; j < 3; j++){
                if(matriz[i][j] % 2 != 0 && matriz[i][j] < media){
                    printf("%i, na linha %i e coluna %i\n", matriz[i][j], i, j);
                }
        }
    }

    return 0;

}
