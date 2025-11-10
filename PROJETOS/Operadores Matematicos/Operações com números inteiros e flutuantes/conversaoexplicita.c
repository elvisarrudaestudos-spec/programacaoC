#include <stdio.h>

// Também é conhecido como "casting", ele força a conversão de um dado para o outro;
// Nesse exemplo a variável inteira é convertida em float antes da divisão, o resultado é do ponto flutuante;
// entre a conversão implicita ou explicita, é melhor de trabalhar a explicita;


int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float, aqui ele incluiu a parte decimal
 
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}