#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoquemaximo = 100;

    printf("Digite a temperatura do ambiente:\n");
        scanf("%f", &temperatura);
    printf("Digite a umidade do ambiente:\n");
        scanf("%f", &umidade);
    printf("Digite o estoque:\n");
        scanf("%u", &estoque);

    if (temperatura > 30)
    {
        printf("A temperatura esta alta! Saia dai. \n");
    }else{
        printf("temperature esta normal \n");
    }
    if (umidade > 50 )
    {
        printf(" A umidade está elevada! \n");
    }else{
        printf("A umidade esta estavel! \n");
    }
    if (estoque > estoquemaximo)
    {
        printf("Estoque passou do necessário! \n");
    }else{
        printf("O estoque está dentro do recomendado \n");
    }
    
}