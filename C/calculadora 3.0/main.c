#include <stdio.h>
#include <stdlib.h>

int main()
{
    float op,x,y;
    printf("digite seus valores separados por(/): \n");
    scanf("%f/%f",&x,&y);
    do{
            printf("[1]adicao\n"
                   "[2]subtracao\n"
                   "[3]multiplicacao\n"
                   "[4]divisao\n"
                   "escolha sua opcao: ");
            scanf("%f",&op);
           }while(op<5||op>0);
            switch(op){
               case 1:
               printf("%f",x+y);
               break;
               case 2:
               printf("%f",x-y);
               break;
               case 3:
               printf("%f",x*y);
               break;
               case 4:
               if(y=0){
                printf("nao e possivel dividir por 0");
                   }
                   else{
                printf("%f",x/y);
               }
               break;
              }

    return 0;
}
