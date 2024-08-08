#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x,f;
     printf("digite o numero: ");
     scanf("%d",&x);
     //definicao  de variavel
     for(f=1;x>1;x=x-1)
        f=f*x;
        //repeticao
      printf("%d",f);
      //resultado

    return 0;
}
