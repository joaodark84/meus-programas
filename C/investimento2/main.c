#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=1;
    a=2;//define a como 2
    b=a*a;
    c=d++;
    printf("%d\n",d);
    d=c++ +5;//
    printf("%d\n",d);
    d=++c +5;
    printf("%d %d %d %d",a,b,c,d);//mostra o resultado 2,4,3,8
    return 0;
}
