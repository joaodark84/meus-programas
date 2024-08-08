#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes,ano;
    printf("digite seu dia,mes e ano entre(,):");
    scanf("%d,%d,%d",&dia,&mes,&ano);//define as variaveies
    if(dia>31||mes>12){
        printf("favor digite um dia e mes menor que seus limites");
        if(dia<1||mes<1)
            printf("favor digite um dia e mes maior que zero");
        if(ano!=2022)
            printf("digite o ano de 2022");
        if(mes==02&&dia>28)
            printf("favor digite uma data compativel com 2022");
            //limita as opcoes para ser aplicavel em 2022
    }
        else
            printf("sua data e valida");








    return 0;
}
