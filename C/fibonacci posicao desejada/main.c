#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,aux=0,aux2=1;
    printf("digite seu limite: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        r=aux2+aux;
        aux=aux2;
        aux2=r;
    }
    printf("\n%d",r);
    return 0;
}
