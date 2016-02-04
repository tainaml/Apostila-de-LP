#include <stdio.h>

int main () {

   int ano_atual,ano_nascimento;

printf("Digite o ano atual: ");
scanf("%d", &ano_atual);
printf("Digite o seu ano de nascimento: ");
scanf("%d", &ano_nascimento);

if ((ano_atual - ano_nascimento) < 18) {
    printf("Infelizmente voce ainda não pode votar\n");
}
else
{
  printf("Voce ja pode votar!\n");
}
}
