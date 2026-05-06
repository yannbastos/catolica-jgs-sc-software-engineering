// 9. Construa um programa que calcule e mostre a soma de todos os números pares entre 100 e 200, inclusive. Após exibir o resultado, o programa deverá permitir que o usuário escolha se deseja repetir essa operação novamente.  
 
// R.:  

#include <stdio.h>

int main() {
    char opcao;

    do {
        int soma = 0; 

        for (int i = 100; i <= 200; i += 2) {
            soma += i;
        }

        printf("\n--- RESULTADO ---\n");
        printf("A soma de todos os numeros pares entre 100 e 200 e: %i\n", soma);

        printf("\nDeseja repetir a operacao? (S para sim, N para nao): ");
        scanf(" %c", &opcao); 

    } while (opcao == 'S' || opcao == 's');

    printf("\nPrograma encerrado. Ate a proxima!\n");

    return 0;
}