#include <stdio.h>
#include <stdlib.h>

int main()
{   int nmr;
    printf("digite um numero:");
    scanf("%d",&nmr);
    //definindo a variavel
    if(nmr>0&&nmr!=0)
    {
        printf("1");
    }
    if(nmr<0)
    {
        printf("-1");
    }
    else if (nmr=0)
        {
        printf("0");
    }
    // confere o sinal

    return 0;
}
