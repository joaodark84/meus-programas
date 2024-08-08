#include <stdio.h>
#include <stdlib.h>
void inverte(int v[]){
    int aux=9;
    for(int i=0;i<10;i++){
        printf("digite seu %d vetor: ",i+1);
        scanf("%d",&v[i]);
    }
    for(int j=9;j>=0;j--){
        printf("%d ",v[j]);
    }
}

int main()
{
    int vet[10];
    inverte(vet);
    return 0;
}
