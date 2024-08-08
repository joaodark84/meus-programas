#include <stdio.h>
#include <stdlib.h>

int main()
{
    float slmin,ht,htv,slbrt,imp,srcb;
    printf("digite o salario minimo e \nhoras uteis separados por /: ");
    scanf("%f/%f",&slmin,&ht);
    htv=slmin/10;
    slbrt=htv*ht;
    imp=slbrt/20;
    srcb=slbrt-imp;
    printf("o salario a receber e: %.2f",srcb);


    return 0;
}
