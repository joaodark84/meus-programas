#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,f=0,ax,a=1;
    printf("digite seu numero: ");
    scanf("%d",&x);
    if(x==1){
        printf("%d\n",f);
    }
    else if(x==2){
        printf("%d\n",a);
    }
    else{
        for(int i=3;i<=x;i++){
        ax=a+f;
        f=a;
        a=ax;
	  printf("%d",ax);
       }
    
    
    return 0;
}

       
