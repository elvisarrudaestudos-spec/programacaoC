#include <stdio.h>

int main() {
float temperatura, umidade;
unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a Temperatura.\n");
    scanf("%f", &temperatura);
    
    printf("Entre com a Umidade.\n");
    scanf ("%f", &umidade);

    printf("Entre com o Estoque.\n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("Temperatura esta alta.\n");
    } else {
        printf("Temperatura esta dentro dos parametros.\n");
    }
    if(umidade > 50){
        printf("Umidade esta elevada.\n");
    } else {
        printf("Temperatura esta dentro dos parametros.\n");
    }
    if(estoque < estoqueminimo){
        printf("Estoque abaixo do minimo.\n");
    } else { 
        printf("O estoque normal.\n");
    }
    return 0;
  
}

