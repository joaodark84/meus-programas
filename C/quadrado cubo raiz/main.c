#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int quad,cubo,raiz,raizc,nmr;
    printf("digite seu numero ");
    scanf("%d",&nmr);
    quad=nmr*nmr;
    cubo=nmr*nmr*nmr;
    raiz=sqrt(nmr);
    raizc=cbrt(nmr);
    printf("seus resultados sao %d,%d,%d,%d",quad,cubo,raiz,raizc);

    return 0;
}
