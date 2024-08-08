#include <stdio.h>
#include <stdlib.h>
void primos(int x){
    int d,pr;
    for(int i=2;i<=x;i++){
        d=0;
        for(int l=1;l<=i;l++){
            if(i%l==0){
                d++;
            }
        }
        if(d==2){
            printf("%d ",i);
        }
    }
}

int main()
{
    int x;
    printf("digite um numero: ");
    scanf("%d",&x);
    primos(x);

    return 0;
}
