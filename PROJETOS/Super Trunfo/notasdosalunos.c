#include <stdio.h>

int main() {
//int nota1, nota2, nota3;
//int media;
// caso eu queira incluir o decimal é só fazer em forma de float
float nota1, nota2, nota3;
float media;

printf("*** Programa de Cálculo de Média ***\n");

printf("Digite a sua primeira nota: \n");
//scanf("%d", &nota1);
scanf("%f", &nota1);

printf("Digite a sua segunda nota: \n");
//scanf("%d", &nota2);
scanf("%f", &nota2);

printf("Digite a sua terceira nota: \n");
//scanf("%d", &nota3);
scanf("%f", &nota3);

//media = (nota1 + nota2 + nota3) / 3;  // implicito
media = (float) (nota1 + nota2 + nota3) / 3;    // explicito

//printf("A média é: %d\n" , media);
printf("A média é: %.1f\n" , media);

printf("\n");

return 0;

}

