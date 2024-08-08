#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x,y=0;
    printf("digite seu limite: ");
    scanf("%d",&x);
    while(y<=x){
        if(y%2==0){
            printf("%d\n",y);
        }
        y=y+1;
    }
    return 0;
}


