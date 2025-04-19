
#include <stdio.h>
int main(){
    int i;
    int qtdAlunosTurma;
    float maiorNota = 0;
    float somaDasNotas = 0;
    float mediaDasNotas;
    int qtdAlunosAprovados = 0;
    float menorNota = 10;
    int k;

    printf("Insira a quantidade de alunos que tem na sua turma: \n");
    scanf("%d", &qtdAlunosTurma);

    do{
        printf("Insira qual o aluno da posicao K voce deseja: \n");
        scanf("%d", &k);

        if(k> qtdAlunosTurma){
            printf("Por favor insira um aluno dentro da sequencia de alunos...");
        }

    } while(k > qtdAlunosTurma);

    float notas[qtdAlunosTurma];

    for(i = 0; i < qtdAlunosTurma; i++){
        
        do{

            printf("Insira aqui sua nota na prova: \n");
            scanf("%f", &notas[i]);


            if(0 > notas[i] || notas[i] > 10){
                
                printf("Insira uma nota valida dentre as notas... ");

            } else {

                if(maiorNota < notas[i]){
                    maiorNota = notas[i];
                }

                if(notas[i] >= 6){
                    qtdAlunosAprovados++;
                }
                
                if(menorNota > notas[i]){
                    menorNota = notas[i];
                }

                somaDasNotas += notas[i];
            }

        } while(0 > notas[i] || notas[i] > 10);

    }

    mediaDasNotas = somaDasNotas / qtdAlunosTurma;

    printf("\nA maior nota da sala foi: %.1f", maiorNota);
    printf("\nA menor nota da sala foi:: %.1f", menorNota);
    printf("\nA media das notas dos alunos: %.1f", mediaDasNotas);
    printf("\nA quantidade de alunos aprovados foi: %d", qtdAlunosAprovados);
    printf("\nA nota do aluno K eh:  %.1f", notas[k]);
    

    return 0;
}   