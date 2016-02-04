#include <stdio.h>

int main () {

float nota1,nota2,nota3,media_final;

printf("Primeira nota: \n""Segunda nota: \n""Terceira nota: \n");
scanf("%f",&nota1);
scanf("%f",&nota2);
scanf("%f",&nota3);

media_final = ((nota1*2 + nota2*3 + nota3*5) / 10);

printf("Media final: %.1f\n",media_final);

}
