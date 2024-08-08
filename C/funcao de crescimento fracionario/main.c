#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,n,aux=0;
    printf("digite seu numero: ");
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        s=1/(float)i;
        aux+=s;
        printf("\n%.2f",s);
    }
    printf("\n%.2f",aux);
    return 0;
}
