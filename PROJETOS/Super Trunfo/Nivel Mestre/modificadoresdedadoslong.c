// O modificador "long" ele aramazena nº maiores com maior precisão o valor dos dados;
// ex. int -2,147,483,648 a 2,147,483,647;
// ex. long int -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807;
// ex. double	±1.7E-308 a ±1.7E+308;
// ex. long double	±3.4E-4932 a ±1.1E+4932
// cuidado com os compiladores pois cada um deles tratam as variáveis de formas diferentes;
// no caso do VS code o nº grande do ex. 2147483648 iria transformar em nº negativo, pois a quantidade de bits ultrapassa o valor;
//  já aqui no github não tem esse problema, pois ele aceita de forma normal 

#include <stdio.h>
 
int main() {
    int numeroNormal = 2147483647; // Valor máximo de int
    long int numeroGrande = 2147483647;
 
    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);
 
    numeroGrande = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", numeroGrande); // %ld= nº grande, %lld double
 
    return 0;

}