#include <stdio.h>
#include <stdlib.h>
int posicao(int x,int p){
    int r;
    for(int i=1;i<=p;i++){
            r=x%10;
            x=x/10;
        }
    printf("%d",r);
}
int main()
{
    int n,k,r;
    printf("digite o numero e a posicao desejada: ");
    scanf("%d %d",&n,&k);
    posicao(n,k);

    return 0;
}
