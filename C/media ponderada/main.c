#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,r;//declaracao de variaveis
    printf("digite 3 valores cujo deseja realizar a media ponderada: ");
    scanf("%f %f %f",&x,&y,&z);//salva as vriaves
    r=(x+2*y+3*z)/6;//realiza a operacao desejada
    printf("%f",r);//mostra o resultado
    return 0;
}
