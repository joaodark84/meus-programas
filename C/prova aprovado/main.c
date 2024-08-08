#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,n,ms,ma,a=0,r=0;
    printf("digite o numero de alunos: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        do{
            printf("digite suas notas: ");
            scanf("%d %d %d",&x,&y,&z);
           }while(x>10||x<0&&y>10||y<0&&z>10||z<0);
        ma=(x+y+z)/3;
        if(ma>=6){
            a=a+1;
        }
        else if(ma<6){
            r=r+1;
        }
        ms+=(x+y+z);
    }
    ms=ms/n;
    printf("%d %d %d",ms,a,r);
    return 0;
}
