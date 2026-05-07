//6) Construa um programa que calcule a área de um círculo.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float raio, area;
    const float PI = 3.14159;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = PI * raio * raio;
    printf("Area: %.2f\n", area);
    return 0;
}
