#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float s=0,y;
    printf("digite o seu valor: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        y=1.0/i;
        printf("\n%.2f",y);
        s+=y;
    }
    printf("\n%.2f",s);



    return 0;
}
