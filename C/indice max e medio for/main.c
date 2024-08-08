#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,media=0,maior;//declaracao de variaveis
    for(int i=1;i<=31;i++){//repeticao que para no 31
        printf("digite seu %d numero:",i);
        scanf("%f",&x);
        media+=x;//faz parcialmente o calculo de media
        if(i==1){//define o maior numero
            maior=x;
        }
        else if(i>1&&x>maior){
            maior=x;
        }
    }
    media=media/31;
    printf("o maior indice:%f\noindice medio:%f",maior,media);//mostra o resultado
    return 0;
}
