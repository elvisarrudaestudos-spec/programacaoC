#include <stdio.h>
// Mistura diferentes tipos de dados em uma expressão;
// Nesse exemplo ele pega uma variável inteira e soma com uma flutuante; 
// Ela pode ser útil, porém pode trazer riscos, porque pode ocorrer a perda de dados;
// Nesse caso como foi uma conversão mais simples não tem problema, porém se envolver vários números e operadores matemáticos pode sim causar muitos problemas;
// Ex: de float para int poderia perder a parte decimal;
// entre a conversão implicita ou explicita, é melhor de trabalhar a explicita;
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
 
    printf("Resultado: %.2f\n", resultado);
 
    return 0;
}