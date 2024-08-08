#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,m,r;
    printf("digite os limite de sua tabela:\n");
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            r=pow(i,j);
            printf("%d ",r);
        }
        printf("\n");
    }
    return 0;
}
