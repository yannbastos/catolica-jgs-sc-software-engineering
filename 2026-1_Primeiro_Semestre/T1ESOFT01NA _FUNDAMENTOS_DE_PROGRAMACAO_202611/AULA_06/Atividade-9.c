/* 9) Faça um programa que implemente uma calculadora simples. O programa deve solicitar dois valores e, em seguida, apresentar o menu abaixo para o usuário escolher a operação desejada:

[1] Adição
[2] Subtração
[3] Multiplicação
[4] Divisão
[5] Fim

O programa deve exibir o resultado da operação escolhida. Caso o usuário escolha divisão, deve verificar se o segundo valor é diferente de zero. Caso a opção informada seja inválida, o programa deve exibir uma mensagem de erro.
R.:
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor1, valor2;
    int opcao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    do {
        printf("\n=== MENU ===\n");
        printf("[1] Adicao\n");
        printf("[2] Subtracao\n");
        printf("[3] Multiplicacao\n");
        printf("[4] Divisao\n");
        printf("[5] Fim\n");
        printf("Sua escolha: ");
        scanf("%i", &opcao);


        switch(opcao) {
            case 1:
                printf("Resultado da Adicao: %.2f\n", valor1 + valor2);
                break;
            case 2:
                printf("Resultado da Subtracao: %.2f\n", valor1 - valor2);
                break;
            case 3:
                printf("Resultado da Multiplicacao: %.2f\n", valor1 * valor2);
                break;
            case 4:
                if (valor2 == 0) {
                    printf("Erro: Divisao por zero!\n");
                } else {
                    printf("Resultado da Divisao: %.2f\n", valor1 / valor2);
                }
                break;
            case 5:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Erro: Opcao invalida!\n");
        }

    } while(opcao != 5);

    return 0;
}