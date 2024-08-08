#include <stdio.h>
#include <stdlib.h>
int media(int x,int y,int z,int a,int b){//usa as variaveis abaixo como parametro
int m;
m=(x+y+z+a+b)/5;//realiza a media
return m;
}
int main()
{
    int a,b,c,d,e,m;
    printf("digite 5 numeros espacados: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);//salva as variaveis parametro
    m=media(a,b,c,d,e);//pega o resultado da media e passa os parametros
    printf("%d",m);
    return 0;
}
