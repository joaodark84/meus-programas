#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,u;
    printf("digite seu numero: ");
    scanf("%d",&x);
    u=x%10;
    while(x/10!=0){
        x=x/10;
    }
    printf(" resultado %d",u+x);
    return 0;
}
