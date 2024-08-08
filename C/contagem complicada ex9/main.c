#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=233,y=456;
   for(;x<=y;x=x+5){
    if(x>=300&&x<=400){
       x=x-2;
       }
       printf("%d\n",x);
   }

    return 0;
}
