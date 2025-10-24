#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    while (n >= 0){
        printf("Você digitou %d\n", n);
        printf("Digite outro numero:");
        scanf("%d", &n);
    }
    printf("Você digitou um numero negativo. Não pode!");
    return 0;
}