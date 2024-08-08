#include <stdio.h>
#include <stdlib.h>
void mat(int x){
    int y[x][x];
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            y[i][j]=i+j;
        }
    }
     for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
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
