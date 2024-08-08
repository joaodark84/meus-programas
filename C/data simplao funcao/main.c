#include <stdio.h>
#include <stdlib.h>

void data(int n1,int n2,int n3){
    int d;
    if(n2>=10&&n2<=12){
             printf("%d/%d/%d",n1,n2,n3);
    }
    else if(n1>31||n1<0||n2>12||n2<0){
         printf("insira um dia ou mes valido");
    }
    else if(n2>=1&&n2<10){
         printf("%d/0%d/%d",n1,n2,n3);
    }
}



int main()
{
    int dia,mes,ano;
    printf("digite seu dia mes e ano respectivamente entre(,)");
    scanf("%d,%d,%d",&dia,&mes,&ano);
    data(dia,mes,ano);

    return 0;
}
