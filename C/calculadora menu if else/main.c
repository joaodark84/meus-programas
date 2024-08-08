#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void forcursivo(int *tam,int *tam2,int val,int i){
   if(val>i){
    *(tam + i) = rand()%100;
    *(tam2 + i) = rand()%100;
    forcursivo(tam,tam2,val,++i);
    }
}
void forcursivo2(int *tam,int *tam2,int val,int i){
    int j=0;
    if(val*2>i){
        *(tam+i)=*(tam2+j);
        forcursivo2(tam,tam2,++i,++j);
    }
}
int main(){
    srand(time(NULL));
    int *tam,val,*tam2;
    printf("digite o tamanho: ");
    scanf("%d",&val);
    tam = malloc(val*sizeof(int));
    tam2 =malloc(val*sizeof(int));
    forcursivo(tam,tam2,val,0);
    realloc(tam,val*2);
    forcursivo2(tam,tam2,val,val);
    for(int i=0;i<val*2;i++){
        printf("%d\n",*(tam+i));
    }
    free(tam);
    free(tam2);
    return 0;
}
