#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int x, y, z;

    if(argc != 4){
        printf("\n\tErro\n\tDigite apenas 3 argumentos\n\n");
        return 1;
    }else{
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        z = atoi(argv[3]);
    }if(y <= x){
        printf("\n\tErro\n\tO segundo argumento eh menor que o primeiro\n\n"); 
        return 1;
    }if(z < x || z > y){
        printf("\n\tErro\n\tO terceiro argumento deve estar entre o primeiro e o segundo\n\n"); 
        return 1;
    }

    const int n = y - x + 1;
    int numero_sorteado = rand() % n + 1;

    if(numero_sorteado == z){
        printf("\n\tVoce foi sorteado\n\n");
    }else{
        printf("\n\tVoce nao foi sorteado\n\n");
    }

    FILE *sorteio = fopen("sorteio.txt", "a");
    fprintf(sorteio, "\n\tMenor valor = %d\n", x);
    fprintf(sorteio, "\tMaior valor = %d\n", y);
    fprintf(sorteio, "\tChute = %d\n", z);
    fprintf(sorteio, "\tNumero sorteado = %d\n", numero_sorteado);
    if(numero_sorteado == z){
        fprintf(sorteio, "\tO usuario foi sorteado\n");
    }else{
        fprintf(sorteio, "\tO usuario nao foi sorteado\n");
    }

    return 0;
}