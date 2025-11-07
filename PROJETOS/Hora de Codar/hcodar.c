#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome [50];
   
    printf("digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite seu nome: \n");
    scanf("%49s", nome);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\nMatrícula: %d\n", nome, matricula);
    printf("Idade: %d\nAltura: %.2f\n", idade, altura);

    return 0;

}