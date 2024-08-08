#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("digite seus numeros entre virgulas: ");
    scanf("%f,%f,%f",&x,&y,&z);
    float soma,media,produto;
    soma=x+y+z;
    media=(x+y+z)/3;
    produto=x-y-z;
    printf("seus resultados sao %.2f para soma\n %.2f para media\n%.2f para o produto\n ",soma,media,produto);



    return 0;
}
