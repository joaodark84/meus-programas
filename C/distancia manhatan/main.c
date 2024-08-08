#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,X,Y,dis;
    printf("digite seus valores divididos por(/): ");
    scanf("%f/%f/%f/%f",&x,&y,&Y,&X);
    //definicao de incognitas
    dis=(x-X)+(y-Y);
    if(X==x&&Y==y){
        printf("nao a distancia nestes pontos");//mostra caso sejam iguais
    }
    else{
        printf("%.2f",dis);//mostra a distancia entre os pontos
    }


   
    return 0;
}
