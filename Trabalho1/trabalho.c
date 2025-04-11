#include <string.h>
#include <stdio.h>

int main() {
    char inicio[20];
    char filmeByType[20];
    char indicacaoByType[20];
    char filmeIndicado[20];

    printf("\nEm razão à sua Assistente Virtual, digite abaixo sua preferência de tipo de filme: (INTENSO , LEVE) ");
    

    do {
        printf("\nInsira uma preferência de filme válida entre (INTENSO e LEVE): ");
        fgets(inicio, sizeof(inicio), stdin);
        inicio[strcspn(inicio, "\n")] = 0;  
    } while (strcmp(inicio, "LEVE") != 0 && strcmp(inicio, "INTENSO") != 0);

    if (strcmp(inicio, "LEVE") == 0) {
        printf("\nInsira abaixo sua preferência de gênero do seu filme: (COMEDIA, ANIMACAO) ");
        
        do {
            fgets(filmeByType, sizeof(filmeByType), stdin);
            filmeByType[strcspn(filmeByType, "\n")] = 0;  
            printf("\nInsira uma preferência de gênero válida entre (COMEDIA e ANIMACAO): ");
        } while (strcmp(filmeByType, "COMEDIA") != 0 && strcmp(filmeByType, "ANIMACAO") != 0);

        if (strcmp(filmeByType, "COMEDIA") == 0) {
            printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
            printf("\nAssistir o filme - As Branquelas");
        } else {
            printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
            printf("\nAssistir o filme - Toy Story");
        }

    } else {
        printf("\nInsira abaixo sua preferência de gênero do seu filme: (TERROR, ACAO) ");
        
        do {
            fgets(filmeByType, sizeof(filmeByType), stdin);
            filmeByType[strcspn(filmeByType, "\n")] = 0;  
            printf("\nInsira uma preferência de gênero válida entre (TERROR e ACAO): ");
        } while (strcmp(filmeByType, "ACAO") != 0 && strcmp(filmeByType, "TERROR") != 0);

        if (strcmp(filmeByType, "ACAO") == 0) {
            printf("\nInsira abaixo sua preferência de especificação do seu filme: (SUPERHERÓIS, AVENTURA) ");
            
            do {
                fgets(indicacaoByType, sizeof(indicacaoByType), stdin);
                indicacaoByType[strcspn(indicacaoByType, "\n")] = 0;  
                printf("\nInsira uma preferência de gênero válida entre (SUPERHERÓIS e AVENTURA): ");
            } while (strcmp(indicacaoByType, "SUPERHERÓIS") != 0 && strcmp(indicacaoByType, "AVENTURA") != 0);

            if (strcmp(indicacaoByType, "SUPERHERÓIS") == 0) {
                printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                printf("\nAssistir o filme - Vingadores: Ultimato");
            } else {
                printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                printf("\nAssistir o filme - MAD MAX");
            }

        } else {
            printf("\nInsira abaixo sua preferência de especificação do seu filme de terror: (PSICOLOGICO, SOBRENATURAL) ");
            
            do {
                fgets(indicacaoByType, sizeof(indicacaoByType), stdin);
                indicacaoByType[strcspn(indicacaoByType, "\n")] = 0; 
                printf("\nInsira uma preferência de gênero válida entre (PSICOLOGICO e SOBRENATURAL): ");
            } while (strcmp(indicacaoByType, "PSICOLOGICO") != 0 && strcmp(indicacaoByType, "SOBRENATURAL") != 0);

            if (strcmp(indicacaoByType, "PSICOLOGICO") == 0) {
                printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                printf("\nAssistir o filme - CORRA!");
            } else {
                printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                printf("\nAssistir o filme - Invocação do Mal.");
            }
        }
    }
}