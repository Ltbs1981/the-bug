#include <stdio.h>

int main() {
    int num_turmas;

    printf("Digite o número de turmas: ");
    scanf("%d", &num_turmas);

    for (int t = 1; t <= num_turmas; t++) {
        int num_alunos;
        float soma = 0, media;

        printf("\nTurma %d:\n", t);

        printf("Digite o número de alunos (máximo 50): ");
        scanf("%d", &num_alunos);

        // Verifica se o número de alunos não excede 50
        if (num_alunos > 50) {
            printf("O número de alunos excede o limite máximo (50).\n");
            continue; // Pula para a próxima iteração do loop
        }

        printf("Digite as notas dos alunos:\n");
        for (int i = 0; i < num_alunos; i++) {
            float nota;
            printf("Nota do aluno %d: ", i + 1);
            scanf("%f", &nota);
            soma += nota;
        }

        media = soma / num_alunos;

        printf("A média das notas da Turma %d é: %.2f\n", t, media);
        printf ("Obrigado e volte sempre");
    }

    return 0;
}



