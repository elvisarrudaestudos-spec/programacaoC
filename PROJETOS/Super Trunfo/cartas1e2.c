#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo1[10];
    char nome_cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    char estado2;
    char codigo2[10];
    char nome_cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
  // Área para entrada de dados
    printf("=== Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Digite o nome da cidade (incluir espaços): ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população (use sem o ponto, ex: 600000): ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² (use ponto, ex: 7522.33): ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    printf("=== Carta 2 ===: \n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Digite o código da carta (ex: B03): ");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade (incluir espaços): ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população (use sem o ponto, ex: 600000): ");
    scanf("%d", &populacao2);

    printf("Digite a área em km² (use ponto, ex: 7522.33): ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

  // Área para exibição dos dados da cidade
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
} 