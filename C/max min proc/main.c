#include <stdio.h>
#include <stdlib.h>
void maxmin(int x){
    int max=0,min=0,n;
    for(int i=1;i<=x;i++){
        printf("digite seu numero: ");
        scanf("%d",&n);
        if(i==1){
            max=n;
            min=n;
        }
        else{
            if(n>max){
                max=n;
            }
            if(n<min){
                min=n;
            }
        }
    }
    printf("%d %d",max,min);
}

int main()
{
    int x;
    printf("digite o numero de repeticoes: ");
    scanf("%d",&x);
    maxmin(x);
    return 0;
}
