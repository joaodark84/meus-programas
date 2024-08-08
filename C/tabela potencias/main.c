#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        float x;
    for(x=1;x<=100;x++){
        printf("%.2f,%.2f,%.2f,%.2f\n",x,pow(x,2),pow(x,3),pow(x,4));
    }
    return 0;
}
