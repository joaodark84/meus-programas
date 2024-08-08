#include <stdio.h>
#include <stdlib.h>
void limite(int x){
    int v[x],y,cont=0;
    for(int i=0;i<=x;i++){
        printf("digite seu %d numero: ",i+1);
        scanf("%d",&y);
        if(y==x){
            cont++;
        }
    }
    printf("%d",cont);
}

int main()
{
    int x;
    do{
    printf("digite o limite do vetor de 1 a 9: ");
    scanf("%d",&x);
    }while(x<1||x>9);
    limite(x);

    return 0;
}
