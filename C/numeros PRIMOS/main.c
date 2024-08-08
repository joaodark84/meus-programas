#include <stdio.h>
#include <stdlib.h>
int PRIMO(int x){
    int i,d=0;
    for(i=1;i<=x;i++){
        if(x%i==0){
            d++;
        }
    }
    if(d==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int x;
    printf("digite seu numero: ");
    scanf("%d",&x);

    for(int i=2;i<=x;i++){
        if(PRIMO(i)==1){
            printf("%d",i);
        }

    }
    return 0;
}
