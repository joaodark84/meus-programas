#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void forcursivo(int *tam,int *tam2,int val,int i){
   if(val>i){
    tam[i] = rand()%100;
    tam2[i] = rand()%100;
    forcursivo(tam,tam2,val,i+1);
    }
}
void forcursivo2(int *tam,int *tam2,int val,int i,int j){
    if(val>i){
        tam[i+val]=tam2[j];
        forcursivo2(tam,tam2,val,i+1,j+1);
    }
}
int main(){
    srand(time(NULL));
    int *tam,val,*tam2;
    printf("digite o tamanho: ");
    scanf("%d",&val);
    tam = malloc(val*sizeof(int));
    if (tam == NULL) {
        printf("Erro ao realocar memória.\n");
        free(tam);
        return 1;
    }
    tam2 = malloc(val*sizeof(int));
    if (tam2 == NULL) {
        printf("Erro ao alocar memória.\n");
        free(tam2);
        return 1;
    }
    forcursivo(tam,tam2,val,0);
    tam=realloc(tam,val*2*sizeof(int));
    if (tam == NULL) {
        printf("Erro ao realocar memória.\n");
        free(tam2);
        return 1;
    }
    forcursivo2(tam,tam2,val,0,0);
    for(int i=0;i<val*2;i++){
        printf("%d\n",tam[i]);
    }
    free(tam);
    free(tam2);
    return 0;
}