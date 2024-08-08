#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    printf("digite seu numero: ");
    scanf("%f",&x);
    printf("%.0f\n",x);
    printf("%.2f\n",x-floor(x));

    return 0;
}
