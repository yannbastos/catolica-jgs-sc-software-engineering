//10) Construa um programa que solicite o valor ganho por hora e o número de horas trabalhadas no mês. Em seguida, calcule e mostre o salário total do mês.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float valorHora, horasTrabalhadas;
    printf("Quanto ganha por hora e quantas horas trabalhou? ");
    scanf("%f %f", &valorHora, &horasTrabalhadas);
    printf("Salario Total: R$ %.2f\n", valorHora * horasTrabalhadas);
    return 0;
}
