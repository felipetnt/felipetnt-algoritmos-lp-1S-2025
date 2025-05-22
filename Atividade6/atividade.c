#include <stdio.h>
#include <math.h>

int getPrimo(int numero){
    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int numero;
    printf("Qual numero de seja verificar se eh primo: ");
    scanf("%d", &numero);
    if(getPrimo(numero)){
        printf("O numero %d eh primo\n", numero);
    } else {
        printf("O numero %d nao eh primo\n", numero);
    }
    return 0;
}