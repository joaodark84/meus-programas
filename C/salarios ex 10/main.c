#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=0,m=0,s=0,mx=0;
    for(int i=1;i<=10;i++){
        printf("digite seu %d salarios: ",i);
        scanf("%f",&x);
        if(mx<x){
            mx=x;
        }
        s+=x;

    }
         m=s/10;
         printf("%.2f/%.2f/%.2f",s,m,mx);

    return 0;
}
