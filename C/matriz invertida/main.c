#include <stdio.h>
#include <stdlib.h>
void mat(int x){
    int y[x][x];
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("digite seu %d valor: ",j+1);
            scanf("%d",&y[i][j]);
        }
    }
     for(int i=x;i>=0;i--){
        for(int j=x;j>=0;j--){
            printf("%d ",y[i][j]);
            }
        printf("\n");
     }
}

int main()
{
    int z;
    printf("digite seu lim: ");
    scanf("%d",&z);
    mat(z);
    return 0;
}
