/*11) Uma empresa contrata um encanador por R$ 25,00 ao dia. Construa um programa que solicite o número de dias trabalhados e calcule a quantia líquida a ser paga, 
sabendo que há desconto de 8% de Imposto de Renda.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int dias;
    float bruto, liquido;
    printf("Dias trabalhados: ");
    scanf("%d", &dias);
    bruto = dias * 25.0;
    liquido = bruto * 0.92; // Desconto de 8%
    printf("Valor liquido a receber: R$ %.2f\n", liquido);
    return 0;
}
