#include <stdio.h>
#include <stdlib.h>
void start(int n1,int n2,int n3,int c){
    printf("digite seu dia mes e ano respectivamente entre(,)");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    do{
        printf("[1]forma brasileira\n"
               "[2]forma estadadunidense\n"
               "[3]fechar\n"
               "digite sua escolha: ");
        scanf("%d",&c);
    }while(c>3||c<1);
    switch(c){
    case 1:
    if(c>=10&&c<=12){
             printf("%d/%d/%d",n1,n2,n3);
    }
    else if(n1>31||n1<0||n2>12||n2<0){
         printf("insira um dia ou mes valido");
    }
    else if(n2>=1&&n2<10){
         printf("%d/0%d/%d",n1,n2,n3);
    }
    break;
    case 2:
          if(n2>=10&&n2<=12){
             printf("%d/%d/%d",n2,n1,n3);
    }
          else if(n1>31||n1<0||n2>12||n2<0){
             printf("insira um dia ou mes valido");
    }
          else if(n2>=1&&n2<10){
             printf("0%d/%d/%d",n2,n1,n3);
    }
    break;
    case 3:
        break;

    }
}



int main()
{
    int dia,mes,ano,opc,r;
    start(dia,mes,ano,opc);

    return 0;
}
