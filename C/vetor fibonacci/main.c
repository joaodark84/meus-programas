#include <stdio.h>
#include <stdlib.h>
void fib(int x){
    int f=0,a=1,ax,v[x];
    if(x==1){
        v[x]=0;
        printf("%d",v[x]);
    }
    else{
        for(int i=0;i<=x;i++){
            if(i==0){
                ax=0;
                v[i]=ax;
            }
            else{
                ax=a+f;
                f=a;
                a=ax;
                v[i]=ax;
                }
        }
        for (int i=0;i<x;i++){
            printf("%d\n",v[i]);
        }
    }

}

int main()
{
    int x;
    printf("digite seu numero de algorismos: ");
    scanf("%d",&x);
    fib(x);
    return 0;
}
