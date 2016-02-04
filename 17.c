#include <stdio.h>

int main () {

float nota1,nota2,media;

printf("Digite a sua primeira nota: ");
scanf("%f",&nota1);
printf("Digite a sua segunda nota: ");
scanf("%f",&nota2);

media = (nota1 +nota2) / 2;

if (media < 6 ) {
  printf("Voce foi reprovado. A sua media foi: %.1f\n",media);
}
else
{
  printf("Voce foi aprovado! A sua media foi: %.1f\n",media);

}
}
