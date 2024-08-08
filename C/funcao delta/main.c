#include <stdio.h>
#include <stdlib.h>
int delta(int a,int b,int c){
    int d;
    d=b*b-4*a*c;
    printf("%d",d);
}

int main()
{
    int x,y,z;
    printf("digite seus valores: ");
    scanf("%d %d %d",&x,&y,&z);
    delta(x,y,z);

    return 0;
}
