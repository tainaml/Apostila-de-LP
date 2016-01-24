#include <stdio.h>

int main () {

int x,y,aux;

printf("Digite o primeiro numero: ");
scanf("%d", &x);
printf("Digite o segundo numero: ");
scanf("%d", &y);

aux=x;
x=y;
y=aux;

printf("Primeiro numero:%4d\nSegundo numero: %4d\n", x,y);
return 0;
}


