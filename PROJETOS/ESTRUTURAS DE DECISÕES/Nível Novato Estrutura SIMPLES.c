// Pontos sobre a estrutura SIMPLES:
// Definição e aplicação do if:
        // Essa função "if" executa apenas se uma condição específica for verdadeira; 
        // ele é apenas uma simples verificação;
        // condicao é uma expressão que pode ser verdadeira (true) ou falsa (false);
        // ma linguagem C o nº 0 é (falso) e o nº 1 (verdadeiro);
        // se você colocar o valor 0 no local da condição, o bloco de código nunca será executado;
        // Este comportamento se assemelha ao tipo "booleano" 0= falso e 1= verdadeiro;

// COMPARAÇÃO DE 2 VALORES:

#include <stdio.h>

int main() {
int numero1 = 6; // Caso esse nº seja "menor ou igual" a 5 ele retornará um valor falso, ou seja, nada será exibido;
int numero2 = 5;

  if (numero1 > numero2) 
  printf("numero1 é maior que numero2\n");
  

// VERIFICAÇÃO DA IDADE

int idade1 = 25; // Caso esse nº seja menor ou igual a 5 ele retornará um valor falso, ou seja, nada será exibido;

    if (idade1 >= 18) 
    printf("Você é maior de idade\n");
  
// VERIFICAÇÃO DA TEMPERATURA:

float temperatura = 30.1; // função float pode ser usado nº decimais

  if (temperatura > 30.0) {
    printf("Está calor\n");
  }
  
// VERIFICAÇÃO DE NOTA:

int nota = 75;

    if (nota >= 60) 
    printf("Você passou!\n");
  

//  VERIFICAÇÃO DE Nº PAR:
int numero = 6; // se eu colocar um nº impar nada vai aparecer 

  if (numero % 2 == 0) // a % indica o resto da divisão, o == 0 reforça o resto 
    printf("O número é par\n");

// VERIFICAÇÃO DE ESTOQUE 

int estoque = 3;

  if (estoque < 5) 
    printf("Estoque baixo\n");
  
  
  
  
  
  
  
  return 0;
}
