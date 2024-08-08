#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("digite seu  numero: ");
    scanf("%d",&x);
    if(x<=1){
        printf("numero invalido");
    }
    else{
        for(int i=1;i<=x;i++){
            if(x%i==0){
                printf("\n%d",i);
            }
        }
    }
    return 0;
}
