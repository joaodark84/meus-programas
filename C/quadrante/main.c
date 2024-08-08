#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("digite os valores da funcao separados de (,): ");
    scanf("%d,%d",&x,&y);
    if(x>0){
            if(y>0){
            printf("primeiro quadrante");
            }else{
                    printf("terceiro quadrante");
                }
    }
    if(x<0){
        if(y>0){
            printf("segundo quadrante");
        }else{
        printf("quarto quadrante");
        }
    }




    return 0;
}
