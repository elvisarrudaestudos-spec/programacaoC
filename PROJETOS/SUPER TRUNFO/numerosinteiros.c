#include <stdio.h>
// a variável "int" significa trabalhar com números inteiros, exemplo, 1,2,3 e etc...
// obs. caso seja usando um número decimal ele vai deixar pelo número mais próximo, ex: 10/3= 3
int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
 
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    return 0;
}