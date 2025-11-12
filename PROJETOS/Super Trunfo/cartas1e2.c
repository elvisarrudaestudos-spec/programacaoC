#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo1[10];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1;

    char estado2;
    char codigo2[10];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2;
    
    // Área para entrada de dados
    printf("=== Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%9s", codigo1);

    printf("Digite o nome da cidade (incluir espaços para nomes compostos, ex: JOÃO PESSOA): ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população (sem ponto): ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km² (use ponto, ex: 7522.33): ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    densidade1 = populacao1 / area1;
    pib_per_capita1 =  (pib1 * 1000000000) / populacao1;
    super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);

    printf("\n");
    
    printf("=== Carta 2 ===: \n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2); 

    printf("Digite o código da carta (ex: A01): ");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade (incluir espaços para nomes compostos, ex: JOÃO PESSOA): ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população (sem ponto): ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km² (use ponto, ex: 7522.33): ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);
  
    // Área para exibição dos dados da cidade
    
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%u)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%u)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);
    printf("\n");
    printf("População: Carta 2 venceu (%u)\n", populacao2 > populacao1);
    printf("Área: Carta 2 venceu (%d)\n", area2 > area1);
    printf("PIB: Carta 2 venceu (%d)\n", pib2 > pib1);
    printf("Pontos Turísticos: Carta 2 venceu (%d)\n", pontos_turisticos2 > pontos_turisticos1);
    printf("Densidade Populacional: Carta 2 venceu (%u)\n", densidade2 < densidade1);
    printf("PIB per Capita: Carta 2 venceu (%d)\n", pib_per_capita2 > pib_per_capita1);
    printf("Super Poder: Carta 2 venceu (%d)\n", super_poder2 > super_poder1);
     
    
    return 0;
} 