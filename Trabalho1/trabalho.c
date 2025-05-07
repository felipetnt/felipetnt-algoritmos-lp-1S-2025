#include <string.h>
#include <stdio.h>

int main()
{
    // Declaração de variáveis
    // Variáveis para armazenar as preferências do usuário
    char inicio[20];
    char bebidaBase[20];
    char bebidaEspecification[20];
    char bebidaIdeal[20];
    char continuar[20] = "NAO";
    int cases = 0;    

    do{
        // Menu de opções

        printf("\nBem-vindo ao seu assistente de bebidas! Seja acomodado com um menu no qual voce pode escolher entre:\n 1- Auxilio na sua escolha de bebidas\n 2- Decida sua bebida ideal para te ser entregue. \n 3- Caso queira sair do assistente!\n");
        scanf("%d", &cases);
        getchar();
        switch (cases)
        {

        case 1:
            // Opção 1: Auxílio na escolha de bebidas
            printf("\nEm razão à sua Assistente Virtual de Luxo, estou aqui para te ajudar a escolher um tipo de bebida para suas comemoracoes e interesses pessoais!");
            printf("\nInsira uma preferência de bebida entre bebidas com alcool ou sem alcool (ALCOLICA OU NAOALCOLICA): \n");
            do{
                fgets(inicio, sizeof(inicio), stdin);
                inicio[strcspn(inicio, "\n")] = 0;
                if(strcmp(inicio, "ALCOLICA") != 0 && strcmp(inicio, "NAOALCOLICA") != 0){
                    printf("\nInsira uma preferência de bebida válida entre (ALCOLICA e NAOALCOLICA): \n");
                }
                // Verifica se a entrada é válida
            } while (strcmp(inicio, "ALCOLICA") != 0 && strcmp(inicio, "NAOALCOLICA") != 0);

            if (strcmp(inicio, "NAOALCOLICA") == 0){
                // Bebidas não alcoólicas
                printf("\n Muito bom! Voce escolheu bebidas nao-alcoolicas! \n");
                printf("\n Deseja algo mais leve ou com mais sabor? (LEVE, SABOR)): \n");

                do{
                    fgets(bebidaBase, sizeof(bebidaBase), stdin);
                    bebidaBase[strcspn(bebidaBase, "\n")] = 0;
                    if(strcmp(bebidaBase, "LEVE") != 0 && strcmp(bebidaBase, "SABOR") != 0){
                        printf("\nInsira uma preferência de bebida válida entre (LEVE e SABOR): \n");
                    }
                    // Verifica se a entrada é válida
                } while (strcmp(bebidaBase, "LEVE") != 0 && strcmp(bebidaBase, "SABOR") != 0);

                if (strcmp(bebidaBase, "LEVE") == 0){
                    printf("\nDe acordo com suas escolhas acredito que a escolha ideal seria: ");
                    printf("\nTomar um drink leve - Agua de Coco com Limão\n");
                } else {
                    printf("\nDe acordo com suas escolhas acredito que a escolha ideal seria: ");
                    printf("\nTomar um drink sem alcool, mas saboroso - Refri com Limão ou Soda Italiana\n");
                }
            } else {
                // Bebidas alcoólicas
                printf("\n Muito bom! Voce escolheu bebidas alcoolicas! \n");
                printf("\nInsira abaixo sua preferência de bebida entre DRINKS ou TRADICIONAIS: (DRINKS, TRADICIONAIS)\n");

                do {
                    fgets(bebidaBase, sizeof(bebidaBase), stdin);
                    bebidaBase[strcspn(bebidaBase, "\n")] = 0;
                    if(strcmp(bebidaBase, "DRINKS") != 0 && strcmp(bebidaBase, "TRADICIONAIS") != 0){
                        printf("\nInsira uma preferência de bebida válida entre (DRINKS e TRADICIONAIS): \n");
                    }
                    // Verifica se a entrada é válida
                } while (strcmp(bebidaBase, "TRADICIONAIS") != 0 && strcmp(bebidaBase, "DRINKS") != 0);

                if (strcmp(bebidaBase, "TRADICIONAIS") == 0){
                    printf("\nInsira abaixo sua preferência de especificação do seu bebida entre DESTILADO e FERMENTADO: (DESTILADO, FERMENTADO) \n");

                    do{
                        fgets(bebidaEspecification, sizeof(bebidaEspecification), stdin);
                        bebidaEspecification[strcspn(bebidaEspecification, "\n")] = 0;
                        if(strcmp(bebidaEspecification, "DESTILADO") != 0 && strcmp(bebidaEspecification, "FERMENTADO") != 0){
                            printf("\nInsira uma preferência de bebida válida entre (DESTILADO e FERMENTADO): ");
                        }
                        // Verifica se a entrada é válida
                    } while (strcmp(bebidaEspecification, "DESTILADO") != 0 && strcmp(bebidaEspecification, "FERMENTADO") != 0);

                    if (strcmp(bebidaEspecification, "DESTILADO") == 0){
                        printf("\n");
                        printf("\nInsira abaixo sua preferência de especificação do seu bebida entre whiskey e mistura: (WHISKEY, MISTURA) \n");

                        do{
                            fgets(bebidaIdeal, sizeof(bebidaIdeal), stdin);
                            bebidaIdeal[strcspn(bebidaIdeal, "\n")] = 0;
                            if(strcmp(bebidaIdeal, "WHISKEY") != 0 && strcmp(bebidaIdeal, "MISTURA") != 0){
                                printf("\nInsira uma preferência de bebida válida entre (WHISKEY e MISTURA): \n");
                            }
                        } while (strcmp(bebidaIdeal, "WHISKEY") != 0 && strcmp(bebidaIdeal, "MISTURA") != 0);

                        if (strcmp(bebidaIdeal, "WHISKEY") == 0) {
                            printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                            printf("\nTemos como opção Chivas Reagal 12 anos e Ballantines 10 anos)\n");
                        } else {
                            printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                            printf("\nExperimentar o bebida - Gin tanqueray com água tônica e limão)\n");
                        }
                    } else {
                        printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                        printf("\ntemos como opção cerveja Heineken e cerveja Colorado escolher entre as duas");
                        printf("\nA cerveja Heineken é uma lager leve e refrescante, enquanto a Colorado é uma cerveja artesanal com sabores mais complexos e encorpados.\n");
                    }
                } else {
                    printf("\nInsira abaixo sua preferência de especificação de seu drink entre refrescante e forte: (REFRESCANTE, FORTE) \n");

                    do{
                        fgets(bebidaEspecification, sizeof(bebidaEspecification), stdin);
                        bebidaEspecification[strcspn(bebidaEspecification, "\n")] = 0;
                        if(strcmp(bebidaEspecification, "REFRESCANTE") != 0 && strcmp(bebidaEspecification, "FORTE") != 0){
                            printf("\nInsira uma preferência de bebida válida entre (REFRESCANTE e FORTE): ");
                        }
                    } while (strcmp(bebidaEspecification, "REFRESCANTE") != 0 && strcmp(bebidaEspecification, "FORTE") != 0);

                    if (strcmp(bebidaEspecification, "REFRESCANTE") == 0){
                        printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                        printf("\nExperimentar o bebida - Cosmopolitan coquetel clássico conhecido por sua cor rosa vibrante e sabor refrescante\n");
                    } else {
                        printf("\nDe acordo com suas escolhas acredito que a ação ideal seria: ");
                        printf("\nExperimentar o bebida - Negroni “conhecido pelo seu sabor forte e amargo”);\n");
                    }
                    printf("Reiniciando o menu...");
                }
            }
            break;
        case 2:
            // Opção 2: Bebidas alcoólicas
            printf("\nMuito bom! Voce selecionou sua bebida ideal! Agora que ja sabe conte-nos, qual sera sua escolha? \n");
            fgets(bebidaIdeal, sizeof(bebidaIdeal), stdin);
            bebidaIdeal[strcspn(bebidaIdeal, "\n")] = 0;
            printf("\nSaindo mais um %s, pra ja! ", bebidaIdeal);
            break;
        case 3:
            // Opção 3: Sair do programa
            printf("\nTem certeza que deseja sair do programa? (SIM ou NAO): \n");
            do{
                fgets(continuar, sizeof(continuar), stdin);
                continuar[strcspn(continuar, "\n")] = 0;
                if(strcmp(continuar, "SIM") != 0 && strcmp(continuar, "NAO") != 0){
                    printf("\nInsira uma opção válida entre (SIM e NAO): \n");
                }
                if (strcmp(continuar, "SIM") == 0)  {
                    printf("\nDespedida da assistente. Até mais!");
                } else {
                    if (strcmp(continuar, "NAO") == 0){
                    printf("\nRetornando a tela inicial! \n");
                    } else {
                        printf("\nOpção inválida. Digite novamente.\n");
                    }
                }
            } while (strcmp(continuar, "NAO") != 0 && strcmp(continuar, "SIM") != 0);
            break;
        }
    } while (strcmp(continuar, "NAO") == 0 || strcmp(continuar, "SIM") != 0);
    return 0;
}