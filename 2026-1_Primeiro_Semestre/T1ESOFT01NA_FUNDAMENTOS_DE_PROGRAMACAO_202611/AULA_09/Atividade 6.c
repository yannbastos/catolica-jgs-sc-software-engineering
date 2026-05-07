// 6. Construa um programa que leia os valores de uma matriz 3x3 e
// exiba todos os elementos na tela no formato de tabela.
// R.:

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int linha, coluna;
    int matriz[3][3];

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Digite um valor: ");
            scanf("%i", &matriz[linha][coluna]);
        }
    }

    printf("\n");

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}