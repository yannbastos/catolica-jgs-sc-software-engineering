/*12) Construa um algoritmo que solicite o salário bruto mensal de um funcionário, calcule e apresente os valores conforme o modelo abaixo:

    Salário Bruto      : R$
    (-) IR (15%)       : R$
    (-) INSS (11%)     : R$
    (-) Sindicato (3%) : R$
    Salário Líquido    : R$

    Observações:
    Descontos = IR + INSS + Sindicato
    Salário Líquido = Salário Bruto - Descontos*/


int main(void) {
    float bruto, ir, inss, sindicato, liquido;
    
    printf("Digite o salario bruto: ");
    scanf("%f", &bruto);

    ir = bruto * 0.15;
    inss = bruto * 0.11;
    sindicato = bruto * 0.03;
    liquido = bruto - (ir + inss + sindicato);

    printf("\nSalario Bruto    : R$ %.2f\n", bruto);
    printf("(-) IR (15%%)      : R$ %.2f\n", ir);
    printf("(-) INSS (11%%)    : R$ %.2f\n", inss);
    printf("(-) Sindicato (3%%): R$ %.2f\n", sindicato);
    printf("Salario Liquido  : R$ %.2f\n", liquido);

    return 0;
}