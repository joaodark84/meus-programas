#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,h,c;
    printf("digite um numero e a quantidade de elevacoes: ");
    scanf("%d %d",&x,&y);
    for(int i=1;i<=x;i++){
        for(int l=1;l<=y;l++){
      printf("%.0f\t",pow(i,l));
    }
    printf("\n");
    }
    return 0;
}
