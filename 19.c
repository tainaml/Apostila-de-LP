#include <stdio.h>

int main () {

float num1,num2;

printf("Digite o primeiro numero: ");
scanf("%f",&num1);

printf("Digite o segundo numero: ");
scanf("%f",&num2);

if (num1 > num2) {
   printf("%.0f é o maior numero\n",num1);
}
else
{  
   printf("%.0f é o maior numero\n",num2);
}
}
