#include <stdio.h>

int main () {

    float  salario_fixo, carros_vendidos, valor_vendas, comissao,salario_final,comissao_vendas;
    int    carros_vendidos


printf("Carros vendidos: ");
scanf("%d", &carros_vendidos);

printf("Valor total das vendas: );
scanf("%f", &valor_vendas);

printf("Salario fixo: ");
scanf("%f",&salario_fixo);

printf("Valor da comissao: ");
scanf("%f", &comissao);

comissao =(valor_vendas * 0.05);
comissao_vendas = (valor_vendas * 0.05);


salario_final =(valor_vendas + salario_fixo + comissao + comissao_vendas);

printf("Salario final: ", salario_final);

}












}
