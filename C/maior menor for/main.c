#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mx=0,mn=0,x=0;

    for (int n=1;n<=15;n++){
        printf("digite seu %d numero: ",n);
        scanf("%f",&x);
      if(n==1){
        mn=x;
        mx=x;
      }
      else{
            if(mx<x){
                mx=x;
            }
            else if(mn>x){
                mn=x;
            }
         }
      }
     printf("%.2f maior e %.2f menor",mx,mn);

    return 0;
}
