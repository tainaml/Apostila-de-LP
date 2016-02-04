#include <stdio.h>

int main () {
    
   int quantidade;
   float custo_total;

printf("Qual a quantidade de maças compradas?: ");
scanf("%d",&quantidade);

if (quantidade < 12) {
   printf("O custo total da compra é: %.2f\n", custo_total=quantidade *1.30);
}
else
{
  printf("O custo total da compra é: %.2f\n", custo_total=quantidade *1.00);
}

}
