/*3) Construa um algoritmo que solicite a temperatura em graus Fahrenheit (°F), converta esse valor para graus Celsius (°C) e mostre o resultado na tela.
#Fórmula: C = 5 * (F - 32) / 9*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float f, c;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = 5 * (f - 32) / 9;
    printf("Resultado: %.2f C\n", c);
    return 0;
}
