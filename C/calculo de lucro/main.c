#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pc,pv,luc,porL,lp=0,lm=0,la=0,vtc=0,vtv=0;
    do{
        printf("digite o valor de compra e o de venda:\n ");
        scanf("%d %d",&pc,&pv);//salva as variaveis
        if(pc<0||pv<0||pc>pv){
            printf("nao ha lucro\n");
        }
            else if(pc!=0||pv!=0){
                luc=pv-pc;//operacoes para resolver
                porL=luc*100/pv;
                printf("\nseu lucro foi %d porcento\n",porL);
                vtc+=pc;
                vtv+=pv;
                if(porL<10){
                    lp++;
                }
                else if(porL<=10||porL>=20){
                    lm++;
                }
                else if(porL>20){
                    la++;
                }
        }
    }while(pc!=0||pv!=0);//repeticao para acabar a contagem
    luc=vtv-vtc;
    porL=luc*100/vtv;
    printf("abaixo de 10 = %d entre 10 e 20 = %d acima de 20 = %d\n",lp,lm,la);//mostra os resultados
    printf("valor total de compra = %d de venda = %d lucro total %d",vtc,vtv,porL);

    return 0;
}
