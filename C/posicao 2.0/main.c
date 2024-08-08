#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1,p2,nmr;
    printf("digite seu numero: ");
    scanf("%d",&nmr);
    p2=nmr%10;
    for(int i=1;i<=nmr;i++){
        nmr=nmr/10;
        p1=nmr%10;

    }
     printf("%d",p1+p2);
    return 0;
}
