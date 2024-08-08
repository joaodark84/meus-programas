#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x,som=0;
   for(int n=1;n<=6;n++){
     printf("digite o valor do mes %d aqui:",n);
     scanf("%f",&x);
     som+=x;}
      printf("a media e %.2f",som/6);

    return 0;
}
