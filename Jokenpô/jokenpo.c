#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, opcaoComputador;
    srand(time(0));

    printf("----JOGO JOKENPÔ----\n");
    printf("Escolha uma dessas opções abaixo:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Sua escolha:");
    scanf("%d", &opcao);

    opcaoComputador = rand() % 3 + 1;

    switch (opcao){
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;
    default:
        printf("Opção inválida");
    }

    switch (opcaoComputador){
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (opcao == opcaoComputador){
        printf("---EMPATE---\n");
    }else if ((opcao == 1) && (opcaoComputador == 3) || 
              (opcao == 2) && (opcaoComputador == 1) ||
              (opcao == 3) && (opcaoComputador == 2)){
        printf("---VOCÊ GANHOU!---\n");
    }else{
        printf("---VOCÊ PERDEU!---\n");
    }
    
    

}