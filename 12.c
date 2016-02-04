#include <stdio.h>

int main () {

float fahrenheit,celsius;

printf("Digite a temperatura em Fahrenheit: ");
scanf("%f",&fahrenheit);

celsius=((fahrenheit - 32) / 1.8);

printf("Valor convertido para Celsius: %.2f\n", celsius);

}


