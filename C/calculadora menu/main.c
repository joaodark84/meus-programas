#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,y,op;
    printf("digite seus valores separados por(,): ");
    scanf("%d,%d",&x,&y);
    printf ( "[1]soma\n"
             "[2]subracao\n"
             "[3]multiplicacao\n"
             "[4]divsao\n"
             "digite sua escolha: ");
    scanf ("%d",&op);

    switch(op){
    case 1:
        printf("%d",x+y);
        break;
    case 2:
        printf("%d",x-y);
        break;
    case 3:
        printf("%d",x*y);
        break;
    case 4:
        if(y==0){
            printf("nao e possivel dividir por 0");
        }
        else{
            printf("%d",x/y);
        }
        break;

    }




    return 0;
}
