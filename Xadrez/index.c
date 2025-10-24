#include <stdio.h>
#include <string.h>

void movimentacaoTorre(int torre){
        if (torre <= 5){
            printf("Direita\n");
            movimentacaoTorre(torre + 1);
        }
}
void movimentacaoBispo(){
        for (int cima=1; cima<=5; cima++){
            printf("Cima!\n");
            for (int lado=1; lado<=1; lado++){
                printf("Lado!\n");
            }  
        } 
}
void movimentacaoRainha(int rainha){
        if (rainha <= 8){
            printf("Esquerda\n");
            movimentacaoRainha(rainha + 1);
        }
}
void movimentacaoCavalo(){
    for (int cima=1, lado = 0 ; cima<=2 && lado <=1; cima++){
        printf("Cima!\n");
        if (cima == 2){
           while (lado <1){
            printf("Direita!\n\n");
            lado++;
            } 
        }  
    } 
}
int main(){
    int torre = 1;
    int rainha = 1;
    printf("torre:-----\n\n");
    movimentacaoTorre(torre);
    printf("Bispo:-----\n\n");
    movimentacaoBispo();
    printf("Rainha:-----\n\n");
    movimentacaoRainha(rainha);
    printf("Cavalo:-----\n\n");
    movimentacaoCavalo();
}