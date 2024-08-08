#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,x,y,z;
    x=0;
    y=10;
    for(z=0;z<3;r=y%3){
    if(r=0){
        x=x+1;
    }
    y=y+5;
    z=z+1;
    }
   printf("%d",x);
   //x=0 resultado final
    return 0;
}
