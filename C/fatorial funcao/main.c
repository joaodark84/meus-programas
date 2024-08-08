#include <stdio.h>
#include <stdlib.h>

int fator (int n1,int f){
    int fatoracao;
    for(f=1;n1>0;f*= n1--){

    }
    printf("%d",f);
    return fator;
}




int main()
{
    int x=0,r=0,fa=0;
    printf("digite o seu valor a ser fatorado: ");
    scanf("%d",&x);
    r=fator(x,fa);

    return 0;
}
