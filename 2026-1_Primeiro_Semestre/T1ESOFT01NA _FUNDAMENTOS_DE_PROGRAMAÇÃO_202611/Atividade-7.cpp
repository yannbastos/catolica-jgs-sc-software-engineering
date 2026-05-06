// 7. Construa um programa que gere a tabuada de 1 a 10 de qualquer número informado pelo usuário. Ao final, o programa deverá exibir todos os resultados correspondentes à multiplicação desse número pelos valores de 1 até 10.  
 
// R.:  

#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero para ver sua tabuada: ");
    scanf("%i", &numero);

    printf("\n--- TABUADA DO %i ---\n", numero);

    for (int i = 1; i <= 10; i++) {

        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    printf("-------------------\n");

    return 0;
}