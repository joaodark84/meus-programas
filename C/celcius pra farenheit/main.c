#include <stdio.h>
#include <stdlib.h>

int main()
{
    float far,cel;
    printf("digite seu valor em fahrenheit: ");
    scanf("%f",&far);
    cel=(far-32)/1,8;
    printf("o valor em celsius e: %.2f",cel);

    return 0;
}
