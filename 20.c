#include <stdio.h>

int main () {

float num1,num2;

printf("Digite o primeiro numero: ");
scanf("%f",&num1);
printf("Digite o segundo numero: ");
scanf("%f",&num2);

if (num1 > num2) {
  printf("Ordem crescente: %.0f,%.0f\n",num2,num1);
}
else
{ 
 printf("Ordem crescente: %.0f,%.0f\n",num1,num2);
}
}
