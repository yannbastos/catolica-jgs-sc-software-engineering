// 8. Considere que a população do país A é de 80.000 habitantes, com crescimento anual de 3%, e que a população do país B é de 200.000 habitantes, com crescimento anual de 1,5%. Construa um programa que calcule e mostre o número de anos necessários para que a população do país A seja maior ou igual à população do país B, mantendo-se essas taxas de crescimento.  
 
// R.:  

#include <stdio.h>

int main() {
    float populacaoA = 80000.0;
    float populacaoB = 200000.0;
    int anos = 0;

    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * 0.03; 
        
        populacaoB += populacaoB * 0.015; 
        
        anos++; 
    }

    printf("\n--- RESULTADO ---\n");
    printf("Serao necessarios %i anos para o Pais A ultrapassar ou igualar o Pais B.\n", anos);
    
    printf("Populacao final do Pais A: %.0f habitantes\n", populacaoA);
    printf("Populacao final do Pais B: %.0f habitantes\n", populacaoB);

    return 0;
}