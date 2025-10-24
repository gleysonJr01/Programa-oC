#include <stdio.h>
int main(){
    int num_carta = 1,num_carta2 = 2;
    char* estado,estado_carta2;
    char* codigo[5], codigo_carta2[5];
    char* nome_cidade[30],nome_cidade_carta2[30];
    unsigned long int populacao,populacao_carta2;
    float area,area_carta2;
    float pib,pib_carta2;
    int pontos_turisticos,pontos_turisticos_carta2;
    float densidade_popu, densidade_popu2;
    float pib_capita,pib_capita2;
    float super_poder, super_poder2;

    printf("Essa é a carta 1, preencha as informações da carta:\n\n");
    printf("Digite o estado da carta:\n");
        scanf("%c", &estado);
    printf("Digite o código da carta:\n");
        scanf("%s", &codigo);
    printf("Digite o nome da cidade:\n");
        scanf("%s", &nome_cidade);
    printf("Digite a quantidade da população da cidade:\n");
        scanf("%lu", &populacao);
    printf("Digite a área da cidade:\n");
        scanf("%f", &area);
    printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
        scanf("%d", &pontos_turisticos);

    densidade_popu = (populacao/area);
    pib_capita = (pib/populacao);
    super_poder = (float) populacao+area+pib+pontos_turisticos+(1/densidade_popu)+pib_capita;

    printf("Essa é a carta 2, preencha as informações da carta:\n");
    printf("Digite o estado da carta:\n");
        scanf(" %c", &estado_carta2);
    printf("Digite o código da carta:\n");
        scanf("%s", &codigo_carta2);
    printf("Digite o nome da cidade:\n");
        scanf("%s", &nome_cidade_carta2);
    printf("Digite a quantidade da população da cidade:\n");
        scanf("%lu", &populacao_carta2);
    printf("Digite a área da cidade:\n");
        scanf("%f", &area_carta2);
    printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib_carta2);
    printf("Digite a quantidade de pontos turísticos da cidade:\n");
        scanf("%d", &pontos_turisticos_carta2);

    densidade_popu2 = (populacao_carta2/area_carta2);
    pib_capita2 = (pib_carta2/populacao_carta2);
    super_poder2 = (float) populacao_carta2+area_carta2+pib_carta2+pontos_turisticos_carta2+(1/densidade_popu2)+pib_capita2;
    
    int opcao, opcao2;
    printf("|------------- MENU DE ESCOLHA ----------------------|\n");
    printf("|Escolha um dos atributos das quais deseja comparar: |\n");
    printf("|1. População                                        |\n");
    printf("|2. Área                                             |\n");
    printf("|3. PIB                                              |\n");
    printf("|4. Pontos Turísticos                                |\n");
    printf("|5. Densidade Demográfica                            |\n");
    printf("|----------------------------------------------------|\n");
    printf("Opção 1: ");
    scanf("%d", &opcao);
    printf("Opção 2: ");
    scanf("%d", &opcao2);
    int carta1_opcao1 = 0, carta1_opcao2 = 0;
    int carta2_opcao1 = 0, carta2_opcao2 = 0;
    const char *atributo_escolhido = NULL;
    const char *atributo_escolhido2 = NULL;

    if (opcao == opcao2){
        printf("As opções são as mesmas. Nao pode!");
    }else{
        switch (opcao){
    case 1:
        printf("Atributo Escolhido: População\n");
        atributo_escolhido = "População";
        if (populacao == populacao_carta2){
            printf("|População:\n");
            printf("|Carta 1: %d\n", populacao);
            printf("|Carta 2: %d\n", populacao_carta2);
            printf("|Resultado: Empate\n");
            printf("|--------------------------\n\n");
        }else if (populacao > populacao_carta2){
            carta1_opcao1 = +1;
            printf("|População:\n");
            printf("|Carta 1: %d\n", populacao);
            printf("|Carta 2: %d\n", populacao_carta2);
            printf("|Resultado: Carta 1 Venceu!\n");
            printf("|--------------------------\n\n");
        }else{
            carta2_opcao1 = +1;
            printf("|População:\n");
            printf("|Carta 1: %d\n", populacao);
            printf("|Carta 2: %d\n", populacao_carta2);
            printf("|Resultado: Carta 2 Venceu!\n");
            printf("|--------------------------\n\n");
        }
        break;
    case 2:
        printf("Atributo Escolhido: Área\n");
        atributo_escolhido = "Área";
        if (area == area_carta2){
            printf("|Área:\n");
            printf("|Carta 1: %d\n", area);
            printf("|Carta 2: %d\n", area_carta2);
            printf("|Resultado: Empate\n");
            printf("|--------------------------\n\n");
        }else if (area > area_carta2){
            carta1_opcao1 = +1;
            printf("|Área:\n");
            printf("|Carta 1: %d\n", area);
            printf("|Carta 2: %d\n", area_carta2);
            printf("|Resultado: Carta 1 Venceu!\n");
            printf("|--------------------------\n\n");
        }else{
            carta2_opcao1 = +1;
            printf("|Área:\n");
            printf("|Carta 1: %d\n", area);
            printf("|Carta 2: %d\n", area_carta2);
            printf("|Resultado: Carta 2 Venceu!\n");
            printf("|--------------------------\n\n");
        }
        break;
    case 3:
        printf("Atributo Escolhido: PIB\n");
        atributo_escolhido = "PIB";
        if (pib == pib_carta2){
            printf("|PIB:\n");
            printf("|Carta 1: %d\n", pib);
            printf("|Carta 2: %d\n", pib_carta2);
            printf("|Resultado: Empate\n|");
            printf("|--------------------------\n\n");
        }else if (pib > pib_carta2){
            carta1_opcao1 = +1;
            printf("|PIB:\n");
            printf("|Carta 1: %d\n", pib);
            printf("|Carta 2: %d\n", pib_carta2);
            printf("|Resultado: Carta 1 Venceu!");
            printf("|--------------------------\n\n");
        }else{
            carta2_opcao1 = +1;
            printf("|PIB:\n");
            printf("|Carta 1: %d\n", pib);
            printf("|Carta 2: %d\n", pib_carta2);
            printf("|Resultado: Carta 2 Venceu!");
            printf("|--------------------------\n\n");
        }
        break;
    case 4:
        atributo_escolhido = "Pontos Turísticos";
        printf("Atributo Escolhido: Pontos Turísticos\n");
        if (pontos_turisticos == pontos_turisticos_carta2){
            printf("|Pontos turísticos:\n");
            printf("|Carta 1: %d\n", pontos_turisticos);
            printf("|Carta 2: %d\n", pontos_turisticos_carta2);
            printf("|Resultado: Empate");
            printf("|-------------------------\n\n");
        }else if (pontos_turisticos > pontos_turisticos_carta2){
            carta1_opcao1 = +1;
            printf("|Pontos turísticos:\n");
            printf("|Carta 1: %d\n", pontos_turisticos);
            printf("|Carta 2: %d\n", pontos_turisticos_carta2);
            printf("|Resultado: Carta 1 Venceu!");
            printf("|---------------------------\n\n");
        }else{
            carta2_opcao1 = +1;
            printf("|Pontos turísticos:|\n");
            printf("|Carta 1: %d\n", pontos_turisticos);
            printf("|Carta 2: %d\n", pontos_turisticos_carta2);
            printf("|Resultado: Carta 2 Venceu!");
            printf("|---------------------------\n\n");
        }
        break;
    case 5:
        atributo_escolhido = "Desindade Demográfica";
        printf("Atributo Escolhido: Densidade Demográfica\n");
        if (densidade_popu == densidade_popu2){
            printf("|Densidade Demográfica:\n");
            printf("|Carta 1: %.2f \n", densidade_popu);
            printf("|Carta 2: %.2f \n", densidade_popu2);
            printf("|Resultado: Empate\n");
            printf("|-----------------------\n\n");
        }else if (densidade_popu > densidade_popu2){
            carta1_opcao1 = +1;
            printf("|Densidade Demográfica:\n");
            printf("|Carta 1: %.2f \n", densidade_popu);
            printf("|Carta 2: %.2f \n", densidade_popu2);
            printf("|Resultado: Carta 1 Venceu! \n");
            printf("|---------------------------\n\n");
        }else{
            carta2_opcao1 = +1;
            printf("|Densidade Demográfica:\n");
            printf("|Carta 1: %.2f \n", densidade_popu);
            printf("|Carta 2: %.2f \n", densidade_popu2);
            printf("|Resultado: Carta 2 Venceu!   \n");
            printf("|--------------------------\n\n");
        }
        break;
    default:
        printf("Opção inválida! Escolha outra opção.");
    }
    switch (opcao2){
    case 1:
        printf("Atributo Escolhido: População\n");
        atributo_escolhido2 = "População";
        if (populacao == populacao_carta2){
            printf("|População:\n");
            printf("|Carta 1: %d\n", populacao);
            printf("|Carta 2: %d\n", populacao_carta2);
            printf("|Resultado: Empate\n");
            printf("|--------------------------\n\n");
        }else if (populacao > populacao_carta2){
            carta1_opcao2 = +1;
            printf("|População:\n");
            printf("|Carta 1: %d\n", populacao);
            printf("|Carta 2: %d\n", populacao_carta2);
            printf("|Resultado: Carta 1 Venceu!\n");
            printf("|--------------------------\n\n");
        }else{
            carta2_opcao2 = +1;
            printf("|População:\n");
            printf("|Carta 1: %d\n", populacao);
            printf("|Carta 2: %d\n", populacao_carta2);
            printf("|Resultado: Carta 2 Venceu!\n");
            printf("|--------------------------\n\n");
        }
        break;
    case 2:
        printf("Atributo Escolhido: Área\n");
        atributo_escolhido2 = "Área";
        if (area == area_carta2){
            printf("|Área:\n");
            printf("|Carta 1: %d\n", area);
            printf("|Carta 2: %d\n", area_carta2);
            printf("|Resultado: Empate\n");
            printf("|--------------------------\n\n");
        }else if (area > area_carta2){
            carta1_opcao2 = +1;
            printf("|Área:\n");
            printf("|Carta 1: %d\n", area);
            printf("|Carta 2: %d\n", area_carta2);
            printf("|Resultado: Carta 1 Venceu!\n");
            printf("|--------------------------\n\n");
        }else{
            carta2_opcao2 = +1;
            printf("|Área:\n");
            printf("|Carta 1: %d\n", area);
            printf("|Carta 2: %d\n", area_carta2);
            printf("|Resultado: Carta 2 Venceu!\n");
            printf("|--------------------------\n\n");
        }
        break;
    case 3:
        printf("Atributo Escolhido: PIB\n");
        atributo_escolhido2 = "PIB";
        if (pib == pib_carta2){
            printf("|PIB:\n");
            printf("|Carta 1: %d\n", pib);
            printf("|Carta 2: %d\n", pib_carta2);
            printf("|Resultado: Empate\n|");
            printf("|--------------------------\n\n");
        }else if (pib > pib_carta2){
            carta1_opcao2 = +1;
            printf("|PIB:\n");
            printf("|Carta 1: %d\n", pib);
            printf("|Carta 2: %d\n", pib_carta2);
            printf("|Resultado: Carta 1 Venceu!");
            printf("|--------------------------\n\n");
        }else{
            carta2_opcao2 = +1;
            printf("|PIB:\n");
            printf("|Carta 1: %d\n", pib);
            printf("|Carta 2: %d\n", pib_carta2);
            printf("|Resultado: Carta 2 Venceu!");
            printf("|--------------------------\n\n");
        }
        break;
    case 4:
        atributo_escolhido2 = "Pontos Turísticos";
        printf("Atributo Escolhido: Pontos Turísticos\n");
        if (pontos_turisticos == pontos_turisticos_carta2){
            printf("|Pontos turísticos:\n");
            printf("|Carta 1: %d\n", pontos_turisticos);
            printf("|Carta 2: %d\n", pontos_turisticos_carta2);
            printf("|Resultado: Empate");
            printf("|-------------------------\n\n");
        }else if (pontos_turisticos > pontos_turisticos_carta2){
            carta1_opcao2 = +1;
            printf("|Pontos turísticos:\n");
            printf("|Carta 1: %d\n", pontos_turisticos);
            printf("|Carta 2: %d\n", pontos_turisticos_carta2);
            printf("|Resultado: Carta 1 Venceu!");
            printf("|---------------------------\n\n");
        }else{
            carta2_opcao2 = +1;
            printf("|Pontos turísticos:|\n");
            printf("|Carta 1: %d\n", pontos_turisticos);
            printf("|Carta 2: %d\n", pontos_turisticos_carta2);
            printf("|Resultado: Carta 2 Venceu!");
            printf("|---------------------------\n\n");
        }
        break;
    case 5:
        atributo_escolhido2 = "Desindade Demográfica";
        printf("Atributo Escolhido: Densidade Demográfica\n");
        if (densidade_popu == densidade_popu2){
            printf("|Densidade Demográfica:\n");
            printf("|Carta 1: %.2f \n", densidade_popu);
            printf("|Carta 2: %.2f \n", densidade_popu2);
            printf("|Resultado: Empate\n");
            printf("|-----------------------\n\n");
        }else if (densidade_popu > densidade_popu2){
            carta1_opcao2 = +1;
            printf("|Densidade Demográfica:\n");
            printf("|Carta 1: %.2f \n", densidade_popu);
            printf("|Carta 2: %.2f \n", densidade_popu2);
            printf("|Resultado: Carta 1 Venceu! \n");
            printf("|---------------------------\n\n");
        }else{
            carta2_opcao2 = +1;
            printf("|Densidade Demográfica:\n");
            printf("|Carta 1: %.2f \n", densidade_popu);
            printf("|Carta 2: %.2f \n", densidade_popu2);
            printf("|Resultado: Carta 2 Venceu!   \n");
            printf("|--------------------------\n\n");
        }
        break;
    default:
        printf("Opção inválida! Escolha outra opção.");
    }
    int total_carta1 = carta1_opcao1 + carta1_opcao2;
    int total_carta2 = carta2_opcao1 + carta2_opcao2;

    printf( "JOGO SUPER TRUNFO\n");
    printf("Nome cidade 1: %s | nome cidade 2: %s\n", nome_cidade, nome_cidade_carta2);
    printf("Opção 1: %s | Opção 2: %s\n", atributo_escolhido, atributo_escolhido2);
    printf("Opção 1: %s\n", atributo_escolhido);
    printf("Carta 1: %d | Carta 2: %d\n", carta1_opcao1, carta2_opcao1);
    printf("Opção 1: %s\n", atributo_escolhido2);
    printf("Carta 1: %d | Carta 2: %d\n", carta1_opcao2, carta2_opcao2);
    if (total_carta1 == total_carta2){
        printf("Empate\n\n");
    }else if (total_carta1 > total_carta2){
        printf("Carta 1 venceu!\n\n");
    }else{
        printf("Carta 2 venceu\n\n");
    }
    printf("Aqui estão as infomações da carta 1:\n\n");
    printf("O estado da carta é: %c\n", estado);
    printf("O código da carta é: %s\n", codigo);
    printf("A cidade da carta é: %s\n", nome_cidade);
    printf("A quantidade da população da cidade é: %lu\n", populacao);
    printf("A área da cidade é: %.2f\n", area);
    printf("O PIB da cidade é: %.2f\n", pib);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos);
    printf("A densidade populacional é: %.2f\n", densidade_popu);
    printf("O PIB per capita é: %.2f\n", pib_capita);
    printf("O super poder é: %.2f\n\n",super_poder);

    printf("Aqui estão as infomações da carta 2:\n\n");
    printf("O estado da carta é: %c\n", estado_carta2);
    printf("O código da carta é: %s\n", codigo_carta2);
    printf("A cidade da carta é: %s\n", nome_cidade_carta2);
    printf("A quantidade da população da cidade é: %lu\n", populacao_carta2);
    printf("A área da cidade é: %.2f\n", area_carta2);
    printf("O PIB da cidade é: %.2f\n", pib_carta2);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos_carta2);
    printf("A densidade populacional é: %.2f\n", densidade_popu2);
    printf("O PIB per capita é: %.2f\n", pib_capita2);
    printf("O super poder é: %.2f\n\n",super_poder2);
    }    
    return 0;
}