#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencherec(int *vetd,int tam,int i){
    if(tam>i){
    vetd[i]=rand()%100;
    preencherec(vetd,tam,i+1);
    }
}
void imprimerec(int *vetd,int tam,int i){
    if(tam>i){
    printf("%d\n",*(vetd+i));
    imprimerec(vetd,tam,i+1);
    }
}
int main(){
    srand(time(NULL));
    int tam,*vetd;
    printf("digite o tamanho de seu vetor dinamico: ");
    scanf("%d",&tam);
    vetd=malloc(sizeof(int)*tam);
    if (vetd == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        return 1;
    }
    preencherec(vetd,tam,0);
    imprimerec(vetd,tam,0);
    free(vetd);
    return 0;
}
