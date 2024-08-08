#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,p,r;
    printf("digite seu numero e a posicao desejada: ");
    scanf("%d %d",&x,&p);
    for(int i=1;i<=p;i++){
            r=x%10;
            x=x/10;

    }

      printf("%d",r);
    return 0;
}
