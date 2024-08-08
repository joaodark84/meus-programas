#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,d;
    printf("digite um numero: ");
    scanf("%d",&x);
    if(x<0){
        printf("digite um numero valido");
    }
    else{
        for(int i=1;i<=x;i++){
            if(x%i==0){
                d++;
            }
        }
        if(d==2){
            printf("PRIMO");
        }
        else{
            printf("NAO PRIMO");
        }
    }

    return 0;
}
