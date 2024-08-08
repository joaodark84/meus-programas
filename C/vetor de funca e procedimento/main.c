#include <stdio.h>
#include <stdlib.h>
void preenche(int x[]){
    for(int i=0;i<3;i++){
        printf("digite um valor: ");
        scanf("%d",&x[i]);
    }
}
int contanegativo(int x[]){
    int c=0;
    for(int i=0;i<3;i++){
        if(x[i]<0)
            c++;
    }
    return c;
}
int main()
{
    int x[3],c;
    preenche(x);
    c=contanegativo(x);
    int r[c];
    for(int i=0;i<3;i++){
        if(x[i]<0){
            r[i]=x[i];
            printf("\n%d",r[i]);
        }
    }
    return 0;
}
