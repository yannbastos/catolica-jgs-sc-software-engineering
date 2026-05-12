// 10. Construa um programa que leia uma matriz 4x4 e conte quantos elementos são maiores que 10. Ao final, exiba a quantidade encontrada. 
// R.:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4];
    int i, j, contador = 0;
    
    printf("Digite os elementos da matriz 4x4:\n");
    
    // Lendo os elementos da matriz
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
            fflush(stdin); // Limpa o buffer do teclado
        }
    }
    
    // Contando elementos maiores que 10
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > 10) {
                contador++;
            }
        }
    }
    
    // Exibindo o resultado
    printf("\nQuantidade de elementos maiores que 10: %i\n", contador);
    
    return 0;
}