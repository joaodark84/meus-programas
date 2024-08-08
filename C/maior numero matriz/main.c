#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void salvamatriz(int x[][3],int y[][3],int m,int e){
    if(e==1){
        for(int i=0;i<m;i++){
            for(int j=0;j<3;j++){
                printf("digite os seus valores das linhas %d e colunas %d ",i,j);
                scanf("%d %d",&x[i][j],&y[i][j]);
            }
        }
    }
    else{
        srand(time(NULL));
         for(int i=0;i<m;i++){
            for(int j=0;j<3;j++){
                x[i][j]=rand()%100;
                y[i][j]=rand()%100;
            }
        }
    }
}
void maior(int x[][3],int m,int *mai){
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            if(*mai<x[i][j])
                *mai=x[i][j];
        }
    }
}
int preenche(int x[][3],int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            printf("digite seu numero da coluna %d e da linha %d: ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
}
void maior(int x[][3],int m,int *mai){
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            if(*mai<x[i][j])
                *mai=x[i][j];
        }
    }
}
int main()
{
    int m,n,mai=0,e;
        printf("digite sua escolha \n[1]ver o maior numero\n[2]aleatoriza\n[!1]sair do codigo:  ");
        scanf("%d",&e);
        if(e==1){
            printf("digite o numero de linhas:  ");
            scanf("%d",&m);
            int x[m][3];
            preenche(x,m);
            mai=0;
            maior(x,m,&mai);
            printf("%d",mai);
        }
	  else if(e==2){
	 	printf("digite o numero de linhas:  ");
            scanf("%d",&m);
            int x[m][3];
            preenche(x,m);
            mai=0;
            maior(x,m,&mai);
            printf("%d",mai);	  
}
    return 0;
}
