#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void salvamatriz(int x[10][10],int e){
    if(e==1){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                printf("digite os seus valores das linhas %d e colunas %d ",i,j);
                scanf("%d",&x[i][j]);
            }
        }
    }
    else{
        srand(time(NULL));
         for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                x[i][j]=rand()%100;
            }
        }
    }
}
int trocapos(int x[10][10]){
    int aux[2][10];
    for(int i=0;i<10;i++){
        aux[0][i]=x[1][i];
        aux[1][i]=x[7][i];
        x[1][i]=aux[1][i];
        x[7][i]=aux[0][i];
        aux[0][i]=x[i][3];
        aux[1][i]=x[i][9];
        x[i][3]=aux[0][i];
        x[i][9]=aux[1][i];
        aux[0][i]=x[4][i];
        aux[1][i]=x[i][9];
        x[i][9]=aux[0][i];
        x[4][i]=aux[1][i];
        aux[1][i]=x[i][10-i-1];
        }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i==j){
                aux[0][j]=x[i][j];
                x[i][j]=aux[0][j];
            }
            x[i][10-i-1]=aux[0][j];
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf(" %d",x[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m[10][10],e;
    printf("digite sua escolha: \n[1]para fazer manualmente\n[2]para aleatorizar\n[!1&&!2]para sair sem fazer:");
    scanf("%d",&e);
    if(e==1)
    {
        salvamatriz(m,e);
        trocapos(m);
    }
    else if(e==2)
    {
        salvamatriz(m,e);
        trocapos(m);
    }
    return 0;
}
