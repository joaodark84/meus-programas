#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x;
  float r;
  printf("digite um valor: ");
  scanf("%d",&x);
  if(x<=0){
    printf("tente novamente");
  }
  for(int i=1;i<=x;i++){
    if(i%2==0){
    r+=i/(x-(i-1))*-1;
    }
    else{
    r+=i/x-(i-1);
    }
  }
   printf("%.2f",r);







    return 0;
}
