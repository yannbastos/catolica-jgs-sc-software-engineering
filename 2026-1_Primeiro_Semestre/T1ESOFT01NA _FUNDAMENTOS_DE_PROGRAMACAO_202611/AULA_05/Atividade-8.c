// 8) Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente. 
// R.:

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, c, temp;
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordenação simples usando comparação
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Numeros em ordem crescente: %d %d %d\n", a, b, c);
    return 0;
}