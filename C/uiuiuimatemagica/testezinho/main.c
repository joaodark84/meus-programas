#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,o;
    x=10;
    y=15;
    o=x+y;
    y=sqrt(x+y);
    x=x-y;

    printf("%.1f,%.1f,%.1f",o,y,x);



    return 0;
}
