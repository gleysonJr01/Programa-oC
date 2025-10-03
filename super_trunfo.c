#include <stdio.h>
int main(){
    int num_carta = 1,num_carta2 = 2;
    char estado,estado_carta2;
    char codigo[5], codigo_carta2[5];
    char nome_cidade[30],nome_cidade_carta2[30];
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
    super_poder = (float) populacao_carta2+area_carta2+pib_carta2+pontos_turisticos_carta2+(1/densidade_popu2)+pib_capita2;

printf("Aqui estão as infomações da carta 1:\n\n");
    printf("O estado da carta é: %c\n", estado);
    printf("O código da carta é: %s\n", codigo);
    printf("A cidade da carta é: %s\n", nome_cidade);
    printf("A quantidade da população da cidade é: %lu\n", populacao);
    printf("A área da cidade é: %f\n", area);
    printf("O PIB da cidade é: %f\n", pib);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos);
    printf("A densidade populacional é: %f\n", densidade_popu);
    printf("O PIB per capita é: %f\n", pib_capita);
    printf("O super poder é: %f\n\n",super_poder);

printf("Aqui estão as infomações da carta 2:\n\n");
    printf("O estado da carta é: %c\n", estado_carta2);
    printf("O código da carta é: %s\n", codigo_carta2);
    printf("A cidade da carta é: %s\n", nome_cidade_carta2);
    printf("A quantidade da população da cidade é: %lu\n", populacao_carta2);
    printf("A área da cidade é: %f\n", area_carta2);
    printf("O PIB da cidade é: %f\n", pib_carta2);
    printf("A quantidade de pontos turísticos da cidade é: %d\n", pontos_turisticos_carta2);
    printf("A densidade populacional é: %f\n", densidade_popu2);
    printf("O PIB per capita é: %f\n", pib_capita2);
    printf("O super poder é: %f\n\n",super_poder2);
    
if (populacao>populacao_carta2)
{
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d habitantes\n", nome_cidade, populacao);
    printf("Carta 2 - %s: %d habitantes\n", nome_cidade_carta2, populacao_carta2);
    printf("Resultado: Carta 1 Venceu!");
}else{
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d habitantes\n", nome_cidade, populacao);
    printf("Carta 2 - %s: %d habitantes\n", nome_cidade_carta2, populacao_carta2);
    printf("Resultado: Carta 2 Venceu!");
}
    return 0;
}