
#include <stdio.h>
int main(){
    int i;
    int qtdAlunosTurma;
    float maiorNota = 0;
    float somaDasNotas = 0;
    float mediaDasNotas;
    int qtdAlunosAprovados = 0;

    printf("Insira a quantidade de alunos que tem na sua turma: \n");
    scanf("%d", &qtdAlunosTurma);

    float notas[qtdAlunosTurma];

    for(i = 0; i < qtdAlunosTurma; i++){
        
        do{

            printf("Insira aqui sua nota na prova: \n");
            scanf("%f", &notas[i]);


            if(0 > notas[i] || notas[i] > 10){
                
                printf("Insira um valor valido... ");

            } else {

                if(maiorNota < notas[i]){
                    maiorNota = notas[i];
                }

                if(notas[i] >= 6){
                    qtdAlunosAprovados++;
                }

                somaDasNotas += notas[i];
            }

        } while(0 > notas[i] || notas[i] > 10);

    }

    mediaDasNotas = somaDasNotas / qtdAlunosTurma;

    printf("\nA maior nota da sala foi: %.1f", maiorNota);
    printf("\nA media das notas dos alunos: %.1f", mediaDasNotas);
    printf("\nA quantidade de alunos aprovados foi: %d", qtdAlunosAprovados);

    return 0;
}   