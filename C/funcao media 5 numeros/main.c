#include <stdio.h>
#include <stdlib.h>
int media(int m){
    int s=0,x=0;
    for(int i=1;i<=5;i++){
        printf("digite seu %d numero ",i);
        scanf("%d",&x);
        s+=x;
    }
    if(s>=5){
        m=s/5;
        printf("%d",m);
    }
}

int main()
{   int x=0,r;
    r=media(x);
    return 0;
}
