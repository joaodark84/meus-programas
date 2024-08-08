#include <stdio.h>
#include <stdlib.h>
void segundo(int x){
    int y[x],ma,sm,tm;
    for(int i=0;i<x;i++){
        printf("digite seu %d valor: ",i+1);
        scanf("%d",&y[i]);
        if(i==0){
            ma=y[i];
            sm=y[i];
            tm=y[i];
        }
        else{
            if(y[i]>ma){
                tm=sm;
                sm=ma;
                ma=y[i];
            }
        }
    }
     printf("%d",sm);
}

int main()
{
    int x;
    printf("digite seu limite: ");
    scanf("%d",&x);
    segundo(x);
    return 0;
}
