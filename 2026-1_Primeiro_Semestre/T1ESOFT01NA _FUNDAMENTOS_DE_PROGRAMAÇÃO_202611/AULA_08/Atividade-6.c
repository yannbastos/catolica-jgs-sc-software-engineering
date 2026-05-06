// 6. Construa um programa que calcule o valor total investido na compra de CDs e também o custo médio por unidade. O usuário deverá informar a quantidade de CDs adquiridos e, em seguida, o valor pago por cada um deles.  
 
// R.:  

#include <stdio.h>

int main() {
    int qtdCDs;
    float valorCD, valorTotal = 0.0, custoMedio;

    printf("Informe a quantidade de CDs adquiridos: ");
    scanf("%i", &qtdCDs);

    if (qtdCDs <= 0) {
        printf("Erro: A quantidade de CDs deve ser maior que zero.\n");
        return 1; // Encerra o programa
    }

    for (int i = 1; i <= qtdCDs; i++) {
        printf("Informe o valor pago pelo %io CD: R$ ", i);
        scanf("%f", &valorCD);
        
        // Acumula o valor digitado no total investido
        valorTotal += valorCD; 
    }

    custoMedio = valorTotal / qtdCDs;

    printf("\n--- RESULTADO ---\n");
    printf("Valor total investido: R$ %.2f\n", valorTotal);
    printf("Custo medio por unidade: R$ %.2f\n", custoMedio);

    return 0;
}