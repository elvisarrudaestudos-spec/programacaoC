// Inventário dos produtos

#include <stdio.h>

int main() {
// declarar as variáveis do produto, u i estoque, double valor unitario, double valor total

char produtoA [30] = "Produto A";
char produtoB [30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA= 500;
unsigned int estoqueMinimoB= 2500;

double ValorTotalA;
double ValorTotalb;

//exibir as informações dos proidutos
printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

//comparações com o valor mínimo de estoque


//comparações entre valores totais dos produtos











}