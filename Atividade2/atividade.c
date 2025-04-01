#define PI 3.1415926
#include <stdio.h>
int main(){

    float raio;
    int opcao;
    float baseMaior;
    float baseMenor;
    float base;
    float altura;
    float area; 
    float diagonalMaior;
    float diagonalMenor;

    printf("Insira qual forma geometrica deseja: \n 1- Quadrado \n 2- Retangulo \n 3- Triangulo \n 4- Trapezio \n 5- Losango \n 6- Circulo \n");
    scanf("%d", &opcao);

    switch (opcao){

    case 1:

        printf("Insira o lado do quadrado: \n");
        scanf("%f", &base);
        area = base * base;
        printf("A area do quadrado vale: %.1f ", area);
        break;
    
    case 2:

        printf("Insira o lado do quadrado: \n");
        scanf("%f", &base);
        printf("Insira o lado do quadrado: \n");
        scanf("%f", &altura);

        area = base * altura;
        printf("\nA area do retangulo vale: %.1f ", area);
        break;

    case 3: 

        printf("Insira a base do triangulo: \n");
        scanf("%f", &base);
        printf("Insira o lado do triangulo: \n");
        scanf("%f", &altura);
        area = base * altura / 2;
        printf("\nA area do triangulo vale: %.1f ", area);
        break;

    case 4:

        printf("Insira a base maior do trapezio: \n");
        scanf("%f", &baseMaior);
        printf("Insira a base menor do trapezio: \n");
        scanf("%f", &baseMenor);
        printf("Insira a altura do trapezio: \n");
        scanf("%f", &altura);
        area = (baseMaior + baseMenor) * altura / 2;
        printf("\nA area do triangulo vale: %.1f ", area);
        break;
        
    case 5:
        
        printf("Insira a diagonal maior do losango: \n");
        scanf("%f", &diagonalMaior);
        printf("Insira a diagonal menor do losango: \n");
        scanf("%f", &diagonalMenor);
        
        area = diagonalMaior * diagonalMenor / 2;
        printf("\nA area do triangulo vale: %.1f ", area);
        break; 

    case 6: 

        printf("Insira o raio do circulo: \n");
        scanf("%f", &raio);
        area = (raio * raio) * PI;
        printf("\nA area do circulo eh: %.1f ", area);
        break;

    default:
        printf("\nInsira um numero valido...");
        break;
    }

    return 0;
}