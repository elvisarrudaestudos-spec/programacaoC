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

    int numero1= 1;
    printf("Antes do incremento: %d\n", numero1);
    numero1++;
    printf("Apos o incremento: %d\n", numero1);

    printf("Antes do decremento: %d\n", numero1);
    numero1--;
    printf("Apos o decremento: %d\n", numero1);
    
    //teria o mesmo resultado se
    int numero1= 1;
    printf("Antes do incremento: %d\n", numero1);
    numero1= numero1 + 1;
    printf("Apos o incremento: %d\n", numero1);

    printf("Antes do decremento: %d\n", numero1);
    numero1= numero1 - 1;
    printf("Apos o decremento: %d\n", numero1);

    // com operadores aritméticos
    
    printf("Antes do incremento: %d\n", numero1);
    numero1 += 1;

}