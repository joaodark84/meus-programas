#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool propver(bool a,bool b, bool c){
    int x;
    x=!a||b&&c;
    printf("%d",x);

}
int main()
{
    bool a,b,c;
    int x,y,z;
    printf("digite o seu valor: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x==1||x==0&&y==1||y==0&&z==1||z==0){
        a=x;
        b=y;
        c=z;
        propver(a,b,c);
    }
    else{
        printf("digite apenas 0 ou 1");
    }
    return 0;
}
