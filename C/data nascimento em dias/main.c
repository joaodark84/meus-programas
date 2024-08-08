#include <stdio.h>
#include <stdlib.h>

int main()
{ int da,dn,dias,sem,mes,ano;
    printf("\n coloque o ano atual seguido de barra e a seu ano de nascimento: ");
    scanf("%d/%d",&da,&dn);
    dias=(da-dn)*365;
    sem=(da-dn)*48;
    mes=(da-dn)*12;
    ano=(da-dn);
    printf("seus valores sao: D=%d\nS=%d\nM=%d\nA=%d",dias,sem,mes,ano);



    return 0;
}
