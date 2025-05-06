#include <string.h>
#include <stdio.h>

int main() {
    char inicio[20];
    char bebidaBase[20];
    char bebidaEspecification[20];
    char bebidaIdeal[20];

    printf("\nEm razão à sua Assistente Virtual de Luxo, estou aqui para te ajudar a escolher um tipo de bebida para suas comemoracoes e interesses pessoais!\n");
    printf("\nInsira uma preferência de bebida entre bebidas com alcool ou sem alcool (ALCOLICA OU NAOALCOLICA): ");

    do {
        printf("\nInsira uma preferência de bebida válida entre (ALCOLICA E NAOALCOLICA): ");
        fgets(inicio, sizeof(inicio), stdin);
        inicio[strcspn(inicio, "\n")] = 0;  
    } while (strcmp(inicio, "ALCOLICA") != 0 && strcmp(inicio, "NAOALCOLICA") != 0);

    if (strcmp(inicio, "NAOALCOLICA") == 0) {
        printf("\n Muito bom! Voce escolheu bebidas nao-alcoolicas! \n");
        printf("\n Deseja algo mais leve ou com mais sabor? (LEVE, SABOR)): ");
        
        do {
            fgets(bebidaBase, sizeof(bebidaBase), stdin);
            bebidaBase[strcspn(bebidaBase, "\n")] = 0;  
            printf("\nInsira uma preferência de bebida válida entre (LEVE, SABOR): ");
        } while (strcmp(bebidaBase, "DRINKS") != 0 && strcmp(bebidaBase, "TRADICIONAL") != 0);

        if (strcmp(bebidaBase, "LEVE") == 0) {
            printf("\nDe acordo com suas escolhas acredito que a escolha ideal seria: ");
            printf("\nTomar um drink leve - Agua de Coco com Limão");
        } else {
            printf("\nDe acordo com suas escolhas acredito que a escolha ideal seria: ");
            printf("\nTomar um drink sem alcool, mas saboroso - Refri com Limão ou Soda Italiana");
        }

    } else {
        printf("\n Muito bom! Voce escolheu bebidas alcoolicas! \n");
        printf("\nInsira abaixo sua preferência de bebida entre DRINKS ou TRADICIONAIS: (DRINKS, TRADICIONAIS) ");
        
        do {
            fgets(bebidaBase, sizeof(bebidaBase), stdin);
            bebidaBase[strcspn(bebidaBase, "\n")] = 0;  
            printf("\nInsira uma preferência de bebida válida entre (DRINKS e TRADICIONAIS): ");
        } while (strcmp(bebidaBase, "TRADICIONAIS") != 0 && strcmp(bebidaBase, "DRINKS") != 0);

        if (strcmp(bebidaBase, "TRADICIONAIS") == 0) {
            printf("\nInsira abaixo sua preferência de especificação do seu bebida entre DESTILADO e FERMENTADO: (DESTILADO, FERMENTADO) ");
            
            do {
                fgets(bebidaEspecification, sizeof(bebidaEspecification), stdin);
                bebidaEspecification[strcspn(bebidaEspecification, "\n")] = 0;  
                printf("\nInsira uma preferência de bebida válida entre (DESTILADO e FERMENTADO): ");
            } while (strcmp(bebidaEspecification, "DESTILADO") != 0 && strcmp(bebidaEspecification, "FERMENTADO") != 0);

            if (strcmp(bebidaEspecification, "DESTILADO") == 0) {
                printf("\n");
                printf("\nInsira abaixo sua preferência de especificação do seu bebida entre whiskey e mistura: (WHISKEY, MISTURA) ");
                    
                do {
                    fgets(bebidaIdeal, sizeof(bebidaIdeal), stdin);
                    bebidaIdeal[strcspn(bebidaIdeal, "\n")] = 0;  
                    printf("\nInsira uma preferência de bebida válida entre (WHISKEY e MISTURA): ");
                } while (strcmp(bebidaIdeal, "WHISKEY") != 0 && strcmp(bebidaIdeal, "MISTURA") != 0);
        
                if (strcmp(bebidaIdeal, "WHISKEY") == 0) {
                    printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                    printf("\nTemos como opção Chivas Reagal 12 anos e Ballantines 10 anos)");
                } else {
                    printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                    printf("\nExperimentar o bebida - Gin tanqueray com água tônica e limão)");
                }
            } else {
                printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                printf("\ntemos como opção cerveja Heineken e cerveja Colorado escolher entre as duas");
                printf("\nA cerveja Heineken é uma lager leve e refrescante, enquanto a Colorado é uma cerveja artesanal com sabores mais complexos e encorpados.");
            }

        } else {
            printf("\nInsira abaixo sua preferência de especificação de seu drink entre refrescante e forte: (REFRESCANTE, FORTE) ");
            
            do {
                fgets(bebidaEspecification, sizeof(bebidaEspecification), stdin);
                bebidaEspecification[strcspn(bebidaEspecification, "\n")] = 0; 
                printf("\nInsira uma preferência de bebida válida entre (REFRESCANTE e FORTE): ");
            } while (strcmp(bebidaEspecification, "REFRESCANTE") != 0 && strcmp(bebidaEspecification, "FORTE") != 0);

            if (strcmp(bebidaEspecification, "REFRESCANTE") == 0) {
                printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                printf("\nExperimentar o bebida - Cosmopolitan coquetel clássico conhecido por sua cor rosa vibrante e sabor refrescante");
            } else {
                printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                printf("\nExperimentar o bebida - Negroni “conhecido pelo seu sabor forte e amargo”);");
            }
        }
    }
    return 0;
}