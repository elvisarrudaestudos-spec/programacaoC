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
    float densidade1, pib_per_capita1;

    char estado2;
    char codigo2[10];
    char nome_cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;
  // Área para entrada de dados
    printf("=== Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Digite o nome da cidade (incluir espaços para nomes compostos, ex: JOÃO PESSOA): ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população (use sem o ponto, ex: 600000): ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² (use ponto, ex: 7522.33): ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    densidade1 = populacao1 / area1;
    pib_per_capita1 =  (pib1 * 1000000000) / populacao1;

    printf("\n");
    
    printf("=== Carta 2 ===: \n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade (incluir espaços para nomes compostos, ex: JOÃO PESSOA): ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população (use sem o ponto, ex: 600000): ");
    scanf("%d", &populacao2);

    printf("Digite a área em km² (use ponto, ex: 7522.33): ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

  // Área para exibição dos dados da cidade
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade1);
    printf("PIB per Capita: %.1f reais\n", pib_per_capita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade2);
    printf("PIB per Capita: %.1f reais\n", pib_per_capita2);

    return 0;
} 