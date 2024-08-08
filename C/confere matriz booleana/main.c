#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void salvamatriz(int x[1][3],int e){
    if(e==1){
        for(int i=0;i<1;i++){
            for(int j=0;j<3;j++){
                do{
                    printf("digite o seu valor booleano da linha %d e coluna %d ",i,j);
                    scanf("%d",&x[i][j]);
                    if(x[i][j]<0&&x[i][j]<1)
                        j--;
                }while(x[i][j]<0&&x[i][j]<1);
            }
        }
    }
    else{
        srand(time(NULL));
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                x[i][j]=rand()%2;
            }
        }
    }
}
int checabool(int x[1][3]){
    int cl=0,cc=0;
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            cl+=x[i][j];
            cc+=x[j][i];
            }
        if(cc!=1||cl!=1)
            return 0;
    }
    return 1;
}

int main()
{
    int m,e,r;
    printf("digite sua escolha: \n[1]para fazer manualmente\n[2]para aleatorizar\n[!1&&!2]para sair sem fazer:");
    scanf("%d",&e);
    if(e==1){
        int m1[1][3];
        salvamatriz(m1,e);
        r=checabool(m1);
        printf("%d",r);
    }
    else if(e==2){
        int m1[3][3];
        salvamatriz(m1,e);
        r=checabool(m1);
        printf("%d",r);
    }
    return 0;
}
