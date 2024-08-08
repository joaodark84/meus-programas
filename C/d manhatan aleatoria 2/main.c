#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int disman(int x,int y,int n){
    srand(time(NULL));
    int dm,sd=0;
    for(int i=1;i<=n;i++){
        dm=(x-rand()%100)+(y-rand()%100);
        if(dm<0){
            dm=dm*-1;
        }
        sd+=dm;
    }
    printf("%d",sd);
}

int main()
{
    int x,y,n;
    printf("digite os valores: ");
    scanf("%d %d %d",&x,&y,&n);
    disman(x,y,n);

    return 0;
}
