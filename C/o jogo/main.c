#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[3];
    for(int i=0;i<3;i++){
        printf("digite seus caracters: ");
        scanf("%s",&x[i]);
    }
    for(int i=0;i<3;i++){
        printf("%d",x[i]);

    }
  return 0;
}
