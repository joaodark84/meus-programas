#include <stdio.h>
#include <stdlib.h>
void cont(int x){
    int p=0;
    for(int i=1;i<=x;i++){
        p+=i;
    }
    printf("%d",p);
}



int main()
{
    int x;
    printf("digite seu numero: ");
    scanf("%d",&x);
    cont(x);

    return 0;
}
