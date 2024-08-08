#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1,l2,l3;
    printf("digite seus lados separados por (/):");
    scanf("%f/%f/%f",&l1,&l2,&l3);
    // definindo as variaveis
    if(l1==l2&&l3==l1){
        printf("equilatero");
    }
    if(l1!=l2&&l2!=l3){
        printf("escaleno");
    }
     else {
        printf("isosceles");
     }
     //delimita qual tipo de triangulo de acordo com os lados
    return 0;
}
