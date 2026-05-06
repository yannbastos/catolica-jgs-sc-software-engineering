//4) Construa um algoritmo que solicite a temperatura em graus Celsius (°C), converta esse valor para graus Fahrenheit (°F) e mostre o resultado na tela.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("Resultado: %.2f F\n", f);
    return 0;
}