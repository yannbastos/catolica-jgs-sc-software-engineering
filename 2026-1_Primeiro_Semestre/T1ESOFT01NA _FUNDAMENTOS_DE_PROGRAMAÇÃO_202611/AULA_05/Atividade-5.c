// 5) Faça um programa que peça um número e informe se o número é inteiro ou quebrado.
// R.:

#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    if (num == (int)num) {
        printf("O numero e inteiro.\n");
    } else {
        printf("O numero e quebrado.\n");
    }
    return 0;
}