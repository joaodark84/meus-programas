#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float s,n,d;
    printf("digite seu numero: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        n=i;
        d=x-i-1;
        if(i%2==0){
            s+=n/d*-1;
        }
        else{
            s+=n/d;
        }
    }
    printf("%d",s);




    return 0;
}
