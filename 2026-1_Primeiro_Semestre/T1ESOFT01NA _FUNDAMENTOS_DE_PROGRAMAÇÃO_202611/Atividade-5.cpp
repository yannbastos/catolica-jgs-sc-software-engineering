// 5. Construa um programa que calcule a média de alunos por turma de uma escola. Para isso, o usuário deverá informar a quantidade de turmas existentes e, em seguida, a quantidade de alunos em cada turma. Considere que nenhuma turma pode possuir mais de 40 alunos.  
 
// R.:  
 
#include <stdio.h>

int main() {
    int qtdTurmas;
    int alunos;
    int totalAlunos = 0;
    float media;

    printf("Informe a quantidade de turmas da escola: ");
    scanf("%i", &qtdTurmas);

    if (qtdTurmas <= 0) {
        printf("Erro: A quantidade de turmas deve ser maior que zero.\n");
        return 1;
    }

    for (int i = 1; i <= qtdTurmas; i++) {
        
        do {
            printf("Informe a quantidade de alunos da turma %i (max 40): ", i);
            scanf("%i", &alunos);

            if (alunos > 40 || alunos < 0) {
                printf("  -> Erro: A turma deve ter entre 0 e 40 alunos. Tente novamente.\n");
            }

        } while (alunos > 40 || alunos < 0);


        totalAlunos += alunos;
    }

    media = (float)totalAlunos / qtdTurmas;

    printf("\n--- RESULTADO ---\n");
    printf("O total de alunos na escola e: %i\n", totalAlunos);
    printf("A media de alunos por turma e: %.2f\n", media);

    return 0;
}