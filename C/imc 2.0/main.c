#include <stdio.h>
#include <stdlib.h>

int main()
{
       float alt,peso,imc;
    printf("digite sua altura e peso separado por(/):  ");
    scanf("%f/%f",&alt,&peso);
    imc=peso/pow(alt ,2);
    //definicao de variavel e conta de imc
    if(imc<18.5){
        printf("o seu imc abaixo da media de valor: %.2f",imc);
    }
    if(imc<24.9&&imc>=18.6){
        printf("o seu imc ideal de valor: %.2f",imc);
    }
    if(imc<29.9&&imc>=25){
        printf("o seu imc levemente acima do peso de valor: %.2f",imc);
    }
    if(imc<34.9&&imc>=30){
        printf("o seu imc obeso grau 1 de valor: %.2f",imc);
    }

    if(imc<39.9&&imc>=35){
        printf("o seu imc obeso grau 2 de valor: %.2f",imc);
    }
    else if(imc>=40){
        printf("o seu imc morbido de valor: %.2f",imc);
    } //separacao categorica do resultado



    return 0;
}
