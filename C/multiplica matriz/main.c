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
int copiaprod(int x[][3],int y[][3],int m){
    int r[m][3];
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            r[i][j]=x[i][j]*y[i][j];
            printf("%d ",r[i][j]);
            }
        }

}
int main()
{
    int m,e;
    printf("digite sua escolha: \n[1]para fazer manualmente\n[2]para aleatorizar\n[!1&&!2]para sair sem fazer:");
    scanf("%d",&e);
    if(e==1){
        printf("digite o tamanho da matriz: ");
        scanf("%d",&m);
        int m1[m][3],m2[3][m];
        salvamatriz(m1,m2,m,e);
        copiaprod(m1,m2,m);
    }
    else if(e==2){
        printf("digite o tamanho da matriz: ");
        scanf("%d",&m);
        int m1[m][3],m2[3][m];
        salvamatriz(m1,m2,m,e);
        copiaprod(m1,m2,m);
    }

    return 0;
}
