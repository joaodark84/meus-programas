#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,ax,aux;
    printf("digite seus numeros: ");
    scanf("%d %d",&x,&y);
    aux=x;
    for(int i=1;i<=y;i++){
        ax=aux*x;
        x=ax;
    }
    printf("%d",ax);
    return 0;
}
