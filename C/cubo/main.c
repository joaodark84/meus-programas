#include <stdio.h>
#include <stdlib.h>
int cubo(int x){
x=x*x*x;//faz o cubo do numero
return x;
}
int main()
{
    int x,r;
    printf("digite seu numero: ");
    scanf("%d",&x);//salva um numero
    r=cubo(x);//chamada da funcao
    printf("%d",r);
    return 0;
}
