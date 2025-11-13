//Operadores relacionais características:
    // controlam o fluxo e lógica dos programas;
    // permitem a comparação entre variáveis;
    // são usados para comparar dois operandos, retornando 1 se a comparação for verdadeira e 0 se for falsa;
    // podem ser usados em qualquer linguagem, ou seja, não se resumem apenas na C;



//Os operadores relacionais disponíveis na linguagem C são:
// > (maior que)
// < (menor que)
// >= (maior ou igual a)
// <= (menor ou igual a)
// == (igual a)
// != (diferente de)
#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    int x = 5; // nº inteiro
    float y = 5.0; // nº flutuante
    int numero = 10;
    float resultado = 10.5;
    char c = 'a'; // as letras contém nº de forma implícita na tabela ASCII, se apontar o mouse na letra 'a' vai aparecer o valor

    // comparação simples
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Comparação com tipos de dados diferentes
    printf("x == y: %d\n", x == y); // indica se é igual ou não 
    printf("x != y: %d\n", x != y); // indica se o nº é ou não diferente


    //Comparação entre variáveis de tipos diferentes com conversão explícita

    int comparacao = (float)numero == resultado; // utiliza o (float) para explícito casting 
    printf("número == resultado: %d\n", comparacao);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d: \n", c, c);

    return 0;
}