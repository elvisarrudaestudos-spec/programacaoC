// características do short: 
    // tem a função de trabalhar com nº menores;
    // trabalha com nº inteiros;
    // oculpa menos memória;
    // 







#include <stdio.h>
 
int main() {
    short int numeroPequeno = 32767; // Valor máximo do short
    printf("Número Pequeno (short int): %d\n", numeroPequeno);
    
    numeroPequeno = 32768; // veja que aqui a dezena foi maior, ou seja, mostrou um valor negativo;
    printf("Número Pequeno (short int): %d\n", numeroPequeno);

    printf("\n *** tamanho das variáveis ***\n");
    printf("Short int: %lu B - int: %lu B -long int: %lu B\n", sizeof(short int), sizeof(int), sizeof( long long int));
    printf("float: %lu B - double: %lu B -long double: %lu B\n", sizeof(float), sizeof(double), sizeof( long double));
    
    return 0;
}