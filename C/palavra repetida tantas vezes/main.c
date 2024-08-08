#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("digite o valor de x: ");
    scanf("%d",&x);
   if(x<0){
        printf("digite um numero positivo");
   }
   else{
        for(int i=1;x>=i;i++){
            printf("\nprogramacao");
        }
   }
    return 0;
}
