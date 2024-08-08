#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,p,n,pt,pn,pp;
  do{
        printf("digite seu numero: ");
        scanf("%d",&x);
        if(x<0){
            pn+=1;
        }
        else if (x>0){
            pp+=1;
        }
  }while(x!=0);
  pt=pp+pn;
  p=(pp*100)/pt;
  n=p-pt;

    printf("%d %\n,%d %",p,n);



    return 0;
}
