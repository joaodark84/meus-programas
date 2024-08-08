#include <stdio.h>
#include <stdlib.h>
int LISTA7Q1(char x[]){
    int r=0;
    for(int i=0;x[i]!='\0';i++){
        printf("\n%c",x[i]);
        if(x[i]>='0'&&x[i]<='9'||x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z')
            r++;
    }
    return r;
}
int main()
{
    int r;
    char y[13]="1Ab65123 7346";
    printf("%s",y);
    r=LISTA7Q1(y);
    printf("\n%d",r);
    return 0;
}
