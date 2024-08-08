#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    for(x=0;x<=1000;x++){
        if(x%3==2&&x%5==3&&x%7==4){
            printf("%d\n",x);
        }
    }



    return 0;
}
