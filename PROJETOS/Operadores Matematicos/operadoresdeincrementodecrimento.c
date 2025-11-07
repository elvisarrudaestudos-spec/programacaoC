#include <stdio.h>
 
// Operadores de incremento (++) decrimento (--)
int main() {
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decrimento (--)
    Pré-Decrimento --a
    Pós-Decrimento a--
    */

    int numero1= 1, resultado;
    printf("Antes do incremento: %d\n", numero1);
    resultado = numero1++;
    printf("Apos Pós-incremento - Numero 1: %d - resultado %d\n", numero1, resultado);
    resultado = ++numero1;
    printf("Apos Pré-incremento - Numero 1: %d - resultado %d\n", numero1, resultado);
    resultado = numero1--;
    printf("Apos Pós-decremento - Numero 1: %d - resultado %d\n", numero1, resultado);
    resultado = --numero1;
    printf("Apos Pré-decremento - Numero 1: %d - resultado %d\n", numero1, resultado);
    //printf("Antes do decremento: %d\n", numero1);
    //numero1--;
    //printf("Apos o decremento: %d\n", numero1);
    
    //teria o mesmo resultado se
    //int numero1= 1;
    //printf("Antes do incremento: %d\n", numero1);
    //numero1= numero1 + 1;
    //printf("Apos o incremento: %d\n", numero1);

    //printf("Antes do decremento: %d\n", numero1);
    //numero1= numero1 - 1;
    //printf("Apos o decremento: %d\n", numero1);

    // com operadores aritméticos
    
    //printf("Antes do incremento: %d\n", numero1);
    //numero1 += 1;

}