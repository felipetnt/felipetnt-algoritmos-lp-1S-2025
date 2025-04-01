#include <stdio.h>
int main(){

    // set idade , peso , altura.
    
    int idade;
    float peso;
    float altura;

    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira sua peso: ");
    scanf("%f", &peso);
    printf("Insira sua altura: ");
    scanf("%f", &altura);

    // IMC - altura sobre peso ao quadrado;

    float IMC = peso * (altura * altura);

    printf("Voce tem %d anos.\n", idade);
    printf("Sua altura eh %.2f.\n", altura);
    printf("Seu peso eh %.2f.\n", peso);
    printf("Sua taxa de IMC vale %.1f.\n", IMC);

    return 0;

}