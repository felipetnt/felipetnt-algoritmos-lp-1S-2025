#include <stdio.h>
#include <string.h>

void printAluno(Aluno alunoQualquer) {
    printf("Aluno: %sNota: %.2f\n", alunoQualquer.nome, alunoQualquer.nota);
}

int getMedia(float nota1, float nota2, float nota3, float nota4, float nota5){
    int resultado = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

}

float getMaiorNota(float nota1, float nota2, float nota3, float nota4, float nota5){
    float maiorNota = 0;
    float notas[5];
    notas[0] = nota1;
    notas[1] = nota2;
    notas[2] = nota3;
    notas[3] = nota4;
    notas[4] = nota5;

    for(int i = 0; i < 5; i++){
        if(nota[i] > maiorNota){
            maiorNota = nota[i];
        }
    }
    return maiorNota;
}

float getMenorNota(float nota1, float nota2, float nota3, float nota4, float nota5){
    float MenorNota = 1000;
    float notas[5];
    notas[0] = nota1;
    notas[1] = nota2;
    notas[2] = nota3;
    notas[3] = nota4;
    notas[4] = nota5;

    for(int i = 0; i < 5; i++){
        if(nota[i] < MenorNota){
            MenorNota = nota[i];
        }
    }
    return MenorNota;
}

typedef struct Aluno {
    char nome[100];
    float nota;
} Aluno;

int main() {
    Aluno alunos[5];
    float maiorNota;
    float menorNota;
    for(int i = 0; i < 5; i++) {
        printf("Bom dia! Insira seu nome como aluno: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Agora insira sua nota na prova: ");
        scanf("%f", &alunos[i].nota);
        getchar();
        maiorNota = getMaiorNota(alunos[1].nota, alunos[2].nota, alunos[3].nota, alunos[4].nota, alunos[5].nota);
        menorNota = getMenorNota(alunos[1].nota, alunos[2].nota, alunos[3].nota, alunos[4].nota, alunos[5].nota);
        printAluno(alunos[i]);

    }
    printf("A maior nota da escola foi: %f", maiorNota);
    printf("A menor nota da escola foi: %f", menorNota);
    return 0;
}