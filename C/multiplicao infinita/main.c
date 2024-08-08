#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,aux=1,r;
    do{
        printf("digite o valor a ser multiplicado: ");
        scanf("%d",&x);
        r=x*aux;
        aux=x;
    }while(x!=0);
    printf("%d",r);
    return 0;
}
