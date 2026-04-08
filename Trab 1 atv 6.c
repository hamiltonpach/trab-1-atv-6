#include <stdio.h>

#define TOTAL 10

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno alunos[TOTAL];
    struct Aluno aprovados[TOTAL];
    struct Aluno reprovados[TOTAL];

    int i, contAprovados = 0, contReprovados = 0;

    for(i = 0; i < TOTAL; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome); // lê string com espaço

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media final: ");
        scanf("%f", &alunos[i].media);
    }

    for(i = 0; i < TOTAL; i++) {
        if(alunos[i].media >= 5.0) {
            aprovados[contAprovados++] = alunos[i];
        } else {
            reprovados[contReprovados++] = alunos[i];
        }
    }

    printf("\n=== APROVADOS ===\n");
    for(i = 0; i < contAprovados; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media: %.2f\n\n", aprovados[i].media);
    }

    printf("\n=== REPROVADOS ===\n");
    for(i = 0; i < contReprovados; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media: %.2f\n\n", reprovados[i].media);
    }

    return 0;
}