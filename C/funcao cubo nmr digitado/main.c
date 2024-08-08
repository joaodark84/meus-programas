#include <stdio.h>
#include <stdlib.h>
int cubo(int x){
    x=pow(x,3);
}

int main()
{
    int x,c;
    printf("digite um numero: ");
    scanf("%d",&x);
    c=cubo(x);
    printf("%d",c);
    return 0;
}
