
#include <stdio.h>

int main ()  {

float vinicial,vreajuste,total;

printf("Valor do salario mensal: ");
scanf("%f",&vinicial);
printf("Valor do percentual de reajuste: ");
scanf("%f",&vreajuste);

total =vinicial*vreajuste;
printf("Valor do salario total: %.2f ",total);

return 0;
}
