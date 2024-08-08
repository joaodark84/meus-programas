#include <stdio.h>
#include <stdlib.h>
void limites(int a,int b,int c){
    for(;a<=b;a=a+c){
        printf("%d\n",a);
    }
}

int main()
{
    int x,y,z;
    printf("digite seu 1 limite: ");
    scanf("%d",&x);
    printf("digite seu 2 limite: ");
    scanf("%d",&y);
    printf("digite seu complemento: ");
    scanf("%d",&z);
    if(x<y&&y>z){
        limites(x,y,z);
    }
    return 0;
}
