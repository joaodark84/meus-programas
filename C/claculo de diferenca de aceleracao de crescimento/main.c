#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5000000,y=7000000,a=0;//declaracao  de variaveis
    while(x<y){//repeticao para realizar o calculo
        x=x+(x*3/100);//calculo
        y=y+(x*2/100);
        a++;
    }
    printf("sao necessarios %d anos",a);//mostra o resultado
    return 0;
}
