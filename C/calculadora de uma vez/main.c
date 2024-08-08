#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,d,m,a,s;
    printf("digite seus numeros: ");
    scanf("%d,%d",&x,&y);
    a=x+y;
    s=x-y;
    m=x*y;
    if(y==0){
        printf("nao e possivel dividir por 0");
    }
    else{
        d=x/y;
    }
    printf("%d,%d,%d,%d",a,s,m,d);



    return 0;
}
