#include <stdio.h>

int main () {

float number;

printf("Digite um numero: ");
scanf("%f", &number);
if (number > 10) {
    printf("MAIOR QUE DEZ!\n");
}else
{
    printf("MENOR QUE DEZ!\n");
}
}
