#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,r=0;
    while(x<1000){//repeticao limitada
        printf("digite seu numero");
        scanf("%d",&x);//salva um valor na variavel
        if(x>=0&&x%2==0){//separador
            r+=x;
        }
    }
    printf("%d",r);//mosta o resultado

    return 0;
}
