// 10. Construa um programa que solicite dois números inteiros, sendo eles a base e o expoente, e calcule o valor da potência correspondente. Ao final, o programa deverá mostrar o resultado do primeiro número elevado ao segundo.  
 
// R.:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numBase, valorExp, total = 1;

    printf("Digite a base: ");
    scanf("%i", &numBase);
    fflush(stdin);

    printf("Digite o expoente: ");
    scanf("%i", &valorExp);
    fflush(stdin);

    for (int j = 1; j <= valorExp; j++) {
        total = total * numBase;
    }

    printf("%i elevado a %i resulta em: %i\n", numBase, valorExp, total);

    return 0;
}