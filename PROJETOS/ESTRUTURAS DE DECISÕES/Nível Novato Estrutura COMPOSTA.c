// Pontos sobre ESTRUTURAS COMPOSTAS:
// Definição e aplicação do if-else:
        // permite ao programa escolher entre dois blocos de código diferentes;
        // Ele diz se a condição é verdadeira ou falsa;
        // A ideia é quase igual ao simples, a diferença é justamente o "else" que aumenta mais as opções; 

//EXEMPLOS:
#include <stdio.h>

int main() {
  int numero = 5; // o programa verifica se numero é divisível por 2

  if (numero % 2 == 0) { 
    printf("O número é par\n");
  } else {
    printf("O número é ímpar\n");
  }

// VERIFICAR A TEMPERATURA:

float temperatura = 25.0;

  if (temperatura > 30.0) {
    printf("Está calor\n");
  } else {
    printf("Não está calor\n");
  }

// COMPARAÇÃO DE PREÇO
float preco = 100.0;

  if (preco > 100.0) {
    printf("O produto é caro\n");
  } else {
    printf("O produto é barato\n");
  }

  return 0;
}