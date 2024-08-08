#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int copiadiagonal(int s[],int m,int e){
    int a[m][m],som=0;
    if(e==1){
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                printf("digite seu numero na linha %d e coluna %d: ",i,j);
                scanf("%d",&a[i][j]);
                if(i==j){
                   s[i]=a[i][j];
                   som+=s[i];
             }
          }
       }
    }
    else if(e==2){
	  srand(time(NULL));
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                a[i][j]=rand%100;
                if(i==j){
                   s[i]=a[i][j];
                   som+=s[i];
    }
    return som;
}
int main()
{
    int m;
    printf("digite sua escolha: \n[1]para copiar a diagonal principal de uma matriz\n[2]aleatorizar\n[!1]para sair:");
    scanf("%d",&e);
    if(2==1){
        printf("digite o tamanho da mariz: ");
        scanf("%d",&m);
        int s[m],r;
        r=copiadiagonal(s,m,e);
        printf("%d",r);
    }
    else if(e==2){
        printf("digite o tamanho da mariz: ");
        scanf("%d",&m);
        int s[m],r;
        r=copiadiagonal(s,m,e);
        printf("%d",r);
}
    return 0;
}
