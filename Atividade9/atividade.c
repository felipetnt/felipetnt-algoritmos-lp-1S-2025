#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double x;
    double y;
} Ponto;
 
int main(int argc, char* argv[]){
    Ponto a, b;

    if(argc != 5){
        printf("Informe os quatro argumentos\nde Xa, Ya, Xb, Yb\n");
        return 1;
    } else {
        a.x = atoi(argv[1]);
        a.y = atoi(argv[2]);
        b.x = atoi(argv[3]);
        b.y = atoi(argv[4]);
    }
    
    double distancia = sqrt((pow(a.x - b.x,2) + pow(a.y - b.y,2)));
    printf("A distancia de A a B eh de: %.2f", distancia);

    return 0;
}