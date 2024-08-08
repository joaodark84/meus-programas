#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=0;
    printf("digite o numero de colunas: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            x=x+1;
            printf(" %d",x);
        }
        printf("\n");
    }
    return 0;
}
