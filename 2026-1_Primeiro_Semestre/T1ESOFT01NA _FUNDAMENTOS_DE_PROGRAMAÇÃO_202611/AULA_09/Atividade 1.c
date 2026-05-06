// 1. Construa um programa que leia 10 números inteiros e armazene em
// um vetor. Ao final, exiba todos os valores informados.
// R.:

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vetor[10];

    for(int i=0; i < 10;i++){
        printf("Digite um numero inteiro: ");
        scanf("%i",&vetor[i]);
    }

    printf("Os numeros informados sao: ");
    for(int i=0; i < 10;i++){
        printf("%i ",vetor[i]);
    }
    printf("\n");

    return 0;
}