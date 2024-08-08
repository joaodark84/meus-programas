#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min=0,max=0,i=0;
    printf("digite o se valor minimo e maximo separados por(,); ");
    scanf("%d,%d",&min,&max);
    if(min%2==0){
            i=min+1;
    }
    else{
            i=min;
    }
    for(;i<=max;i=i+2){
        printf("%d\n",i);
    }





    return 0;
}
