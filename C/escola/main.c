#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,m,mai=0,men=0,mn=0,mi=0;//declaracao de variavel
    printf("digite seu numero de alunos\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){//repeticao para checar as notas
        printf("digite sua nota final:\n");
        scanf("%d",&n);//salva as notas
        m+=n;//calculo da media
        if(i==1){//realiza as checagens
            mai=n;
            men=n;
        }
        else if(n<men){
            men=n;
        }
        else if(n>mai){
            mai=n;
        }
        if(n>=60){
                mi++;
        }
        else if(n<=60&&n>=0){
                mn++;
        }
    }
    m=m/x;
    printf("\na media e %d\na maior nota %d\na menor nota %d\no numero de APROVADOS %d\no numero de REPROVADOS %d",m,mai,men,mi,mn);//mostra os resultados

    return 0;
}
