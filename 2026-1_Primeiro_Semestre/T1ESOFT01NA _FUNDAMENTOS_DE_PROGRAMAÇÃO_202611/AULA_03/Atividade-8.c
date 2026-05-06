//8) Construa um programa que solicite dois números, calcule a soma entre eles e mostre o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a, b;
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    printf("Soma: %.2f\n", a + b);
    return 0;
}