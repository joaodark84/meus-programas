#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int x,y,n,dm;
    printf("digite os valores: ");
    scanf("%d %d %d",&x,&y,&n);
    for(int i=1;i<=n;i++){
        dm=(x-rand()%100)+(y-rand()%100);
        if(dm<0){
            dm=dm*-1;
        }
    }
    printf("%d",dm);
    }

    return 0;
}
