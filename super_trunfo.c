#include <stdio.h>
int main(){
    int num_carta = 1,num_carta2 = 2;
    char estado,estado_carta2;
    char codigo[5], codigo_carta2[5];
    char nome_cidade[30],nome_cidade_carta2[30];
    int populacao,populacao_carta2;
    float area,area_carta2;
    float pib,pib_carta2;
    int pontos_turisticos,pontos_turisticos_carta2;
//Essa é o código para a carta 1

    printf("Essa é a Carta 1. Por favor preencha as informações dessa carta:\n");
    printf("Digite o estado dessa carta:\n");
        scanf("%c", &estado);

    printf("Digite o código dessa carta (O código é o estado que você inseriu + a numeração da carta)\n");
        scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
        scanf("%s", nome_cidade);

    printf("Digite a quantidade da populaçao dessa cidade:\n");
        scanf("%d",&populacao);

    printf("Digite a área dessa cidade:\n");
        scanf("%f", &area);

    printf("Digite o PIB dessa cidade:\n");
        scanf("%f", &pib);

    printf("Digite quantos pontos turísticos tem nessa cidade:\n");
        scanf("%d", &pontos_turisticos);

// Esse é o código para a carta 2
    
    printf("Essa é a Carta 2. Por favor preencha as informações dessa carta:\n");
    printf("Digite o estado dessa carta:\n");
        scanf(" %c", &estado_carta2);

    printf("Digite o código dessa carta (O código é o estado que você inseriu + a numeração da carta)\n");
        scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade:\n");
        scanf("%s",nome_cidade_carta2);
        
    printf("Digite a quantidade da populaçao desa cidade:\n");
        scanf("%d",&populacao_carta2);

    printf("Digite a área dessa cidade:\n");
        scanf("%f", &area_carta2);

    printf("Digite o PIB dessa cidade:\n");
        scanf("%f", &pib_carta2);

    printf("Digite quantos pontos turísticos tem nessa cidade:\n");
        scanf("%d", &pontos_turisticos_carta2);

//Agora aqui exibi tudo oque foi inserido pelo o usuário
printf("Aqui estão as informações que voccê inseriu para cada carta:\n\n ");
printf("Carta: %d\n", num_carta);
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da cidade: %s\n", nome_cidade);
printf("População: %d\n", populacao);
printf("Área: %.2f\n", area);
printf("PIB: %.2f\n", pib);
printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos);


printf("Carta: %d\n", num_carta2);
printf("Estado: %c\n", estado_carta2);
printf("Código: %s\n", codigo_carta2);
printf("Nome da cidade: %s\n", nome_cidade_carta2);
printf("População: %d\n", populacao_carta2);
printf("Área: %.2f\n", area_carta2);
printf("PIB: %,2f\n", pib_carta2);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta2);
    return 0;
}