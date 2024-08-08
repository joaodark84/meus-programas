#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1000
void salvamatriz(int x[MAX][MAX],int e,int *n){
    int y;
    printf("digite o tamanho de sua matrix ate 1000: ");
    scanf("%d",&y);
    *n=y;
    if(e==1){
        for(int i=0;i<*n;i++){
            for(int j=0;j<*n;j++){
                printf("digite os seus valores das linhas %d e colunas %d ",i,j);
                scanf("%d",&x[i][j]);
            }
        }
    }
    else{
        srand(time(NULL));
         for(int i=0;i<*n;i++){
            for(int j=0;j<*n;j++){
                x[i][j]=rand()%100;
            }
        }
    }
}
void checamagia(int x[MAX][MAX],int n){
    int nmr=0,horiz=0,verti=0,diagp=0,diags=0;
    for(int i=0;i<n;i++){
        nmr+=x[1][i];
        diagp+=x[i][i];
        diags+=x[i][n-i-1];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            horiz+=x[i][j];
            verti+=x[j][i];
        }
        if(nmr!=horiz||nmr!=verti){
                printf("nao quadrado magico");
                return;
        }
        horiz=0;
        verti=0;
    }
    if(nmr!=diagp||diags!=nmr){
            printf("nao quadrado magico");
            }
    else{
            printf("quadrado magico");
    }
}


int main()
{

    int m[2][2],e,n;
    printf("digite sua escolha: \n[1]para fazer manualmente\n[2]para aleatorizar\n[!1&&!2]para sair sem fazer:");
    scanf("%d",&e);
    if(e==1){
        salvamatriz(m,e,&n);
        checamagia(m,n);
    }
    else if(e==2){
        salvamatriz(m,e,&n);
        checamagia(m,n);
    }
    return 0;
}
