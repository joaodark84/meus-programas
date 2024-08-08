#include <stdio.h>
#include <stdlib.h>
void regra(int v[]){
    for(int i=0;i<10;i++){
        if(i%3==0){
            v[i]=1;
        }
        else{
            v[i]=-1;
        }
        printf("%d ",v[i]);
    }
}

int main()
{
    int vet[10];
    regra(vet);
    return 0;
}
