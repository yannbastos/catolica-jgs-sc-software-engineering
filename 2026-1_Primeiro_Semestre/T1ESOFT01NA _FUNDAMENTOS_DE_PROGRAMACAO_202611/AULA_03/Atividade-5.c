/*5) Construa um algoritmo que solicite dois números inteiros e um número real. Em seguida, calcule e mostre:
   a) o produto do dobro do primeiro número com a metade do segundo número;
   b) a soma do triplo do primeiro número com o terceiro número;
   c) o terceiro número elevado ao cubo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int n1, n2;
    float n3;
    printf("Digite dois inteiros e um real: ");
    scanf("%i %i %f", &n1, &n2, &n3);

    printf("a) Produto: %.2f\n", (n1 * 2) * (n2 / 2.0));
    printf("b) Soma: %.2f\n", (n1 * 3) + n3);
    printf("c) Cubo: %.2f\n", pow(n3, 3));
    return 0;
}