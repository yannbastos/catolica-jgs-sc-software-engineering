//9) Construa um programa que solicite as quatro notas bimestrais de um aluno e mostre a média final.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float n1, n2, n3, n4, media;
    printf("Digite as 4 notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("Media Final: %.2f\n", media);
    return 0;
}
