#include <stdio.h>
int main(){

    int idade;
    float peso;
    float altura;

    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira sua peso: ");
    scanf("%d", &peso);
    printf("Insira sua idade: ");
    scanf("%d", &altura);

    // IMC - altura sobre peso ao quadrado;

    float IMC = altura / (peso * peso);

    printf("Voce tem %d anos.\n");
    printf("Sua altura eh %.2f.\n");
    printf("Seu peso eh %.2f.\n");

    return 0;
}