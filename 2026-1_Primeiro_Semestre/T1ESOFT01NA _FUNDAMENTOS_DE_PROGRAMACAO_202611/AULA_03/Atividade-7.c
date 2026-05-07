//7) Construa um programa que converta uma medida em metros para centímetros.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float metros;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    printf("%.2f metros equivalem a %.2f centimetros.\n", metros, metros * 100);
    return 0;
}
