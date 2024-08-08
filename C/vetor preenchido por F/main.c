#include <stdio.h>
#include <stdlib.h>
void func(int x){
    int r[x];
    for(int i=0;i<x;i++){
        r[i]=i*(3*pow(i,2)+2*i-4);
    }
    for(int i=0;i<x;i++){
        printf("%d ",r[i]);
    }
}

int main()
{
    int x;
    printf("digite seu valor de x: ");
    scanf("%d",&x);
    func(x);
    return 0;
}
