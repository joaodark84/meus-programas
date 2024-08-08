#include <stdio.h>
#include <stdlib.h>

int main()
{   float alt,peso,imc;
    printf("digite sua altura  ");
    scanf("%f",&alt);
    printf("digite seu peso ");
    scanf("%f",&peso);
    imc=peso/pow(alt ,2);
    printf("o seu imc %.4f",imc);
    return 0;
}
