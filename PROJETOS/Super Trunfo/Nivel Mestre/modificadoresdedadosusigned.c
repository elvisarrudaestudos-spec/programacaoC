// a variável "int" trabalha tanto com valores positivos/ negativos ex. -2.147.148,648 e 2.147.148,648 bilhões;
// obs. caso ele ultrapasse o nº de 2.147.148,648, ele retorna para o nº negativo ex. 3000000000= -1294967296;
// já a variável "unsigned int" trabalha apenas com valores positivos, porém em uma quantidade maior ex. 0 a 4.294.967,295 bilhões;
// já a "char" vai de -128 a + 127;
// já a "unsigned int" 0 a 255;
// ou seja o unsigned dobra o valor de forma positiva;

#include <stdio.h>
 
int main() {
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;
 
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);
 
    return 0;
}