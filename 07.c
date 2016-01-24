#include <stdio.h>

int main () {

int idade, ano,mes,dia;

ano = 365*idade;
mes = 30*idade;
dia = 1*idade;

printf("Please, type your age/Por favor, digite a sua idade.");
scanf("%d",&idade);

printf("RESULTADO:\n" "A sua idade em anos: %d\nA sua idade em meses: %d\nA sua idade em dias: %d ",idade,mes,dia);

return 0;
}
