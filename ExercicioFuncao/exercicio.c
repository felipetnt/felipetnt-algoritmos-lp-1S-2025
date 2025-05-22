#include <stdio.h>
int main(){
    int var1;
    int var2;
    int resultado
    printf("Insira o valor da variavel 1 :");
    scanf("%d", &var1);
    printf("Insira o valor da variavel 2 :");
    scanf("%d", &var2);
    resultado = getMaior(var1, var2);
    printt("%d", resultado);
}

int getMaior(int varA, int varB){
    if(varA > varB){
        return varA;
    } else {
        if(varB > varA){
            return varB;
        }
    }
}