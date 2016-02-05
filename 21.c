#include <stdio.h>

int main () {

int inicio,fim,total;

printf("Digite a hora de início do jogo de xadrez: ");
scanf("%d",&inicio);
printf("Agora digite a hora final: ");
scanf("%d",&fim);

total = inicio+fim;

if (total == 24) {
 printf("voce completou o dia inteiro jogando!\n");
}
else
{
 printf("Total: %d\n",total);
}
}


