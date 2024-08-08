#include <stdio.h>
#include <stdlib.h>


int main()
{
    int e,aux,rINT,aux5,aux6;//declaracao de variaveis
    float aux2,aux3,rF;
    do{
        printf("[1]primeira questao\n[2]segunda questao\n[3]terceira questao\n[4]quarta questao\n[5]sair\ndigite sua escolha: ");//menu
        scanf("%d",&e);
        if(e==1){//primeira questao
            do{
                printf("digite um numero: ");
                scanf("%d",&aux);
            }while(aux==0);
            for(int i=2;i<aux;i=i+2){//elimina multiplos de 7
                if(aux%7!=0){
                    printf(" %d\n",i);
                }
            }
        }
        else if(e==2){//2 questao
            printf("digite o numero de horas: ");
            scanf("%f",&aux2);
            if(aux2>8&&aux2>0){// Cálculo do pagamento com taxa variável
                rF=aux2*(80+((aux2-8)*80*0.5));
                printf("%.2f\n",rF);
            }
            else if(aux2>0&&aux2<=8){
                rF=aux2*aux3;
                printf("%.2f\n",rF);
            }
      }
        else if(e==3){
            do{//terceira questao
                printf("escolha seu fundo\n[1] Fundo de Acoes de Empresas Brasileiras R$ 200 por cota\n[2] Fundo de Acoes de Empresas Norte Americanas R$ 300 por cota\n[3] Fundo de Titulos do Tesouro Nacional (Brasil) R$ 50 por cota\n[4] Fundo de Titulos do Tesouro Norte Americano R$ 100 por cota\ndigite sua escolha: ");//menu
                scanf("%d",&aux);//menu de escolha de investimento
                fflush(stdin);
            }while(aux<=0);
            printf("\ndigite o dinheiro que deseja investir: ");
            scanf("%d",&aux6);
            fflush(stdin);
            if(aux==1){//cada escolha
                printf("\ndigite quantas cotas deseja comprar: ");
                scanf("%d",&aux5);
                fflush(stdin);
                aux5=aux5*200;
                if(aux6-aux5<0){
                    printf("saldo insuficiente para comprar as cotas");
                }
                else if(aux6-aux5>=0){
                    aux6=aux6-aux5;
                }
            }
            else if(aux==2){
                printf("\ndigite quantas cotas deseja comprar: ");
                scanf("%d",&aux5);
                fflush(stdin);
                aux5=aux5*300;
                if(aux6-aux5<0){
                    printf("saldo insuficiente para comprar as cotas");
                }
                else if(aux6-aux5>=0){
                    aux6=aux6-aux5;
                }
            }
            else if(aux==3){
                printf("\ndigite quantas cotas deseja comprar: ");
                scanf("%d",&aux5);
                fflush(stdin);
                aux5=aux5*50;
                if(aux6-aux5<0){
                    printf("saldo insuficiente para comprar as cotas");
                }
                else if(aux6-aux5>=0){
                    aux6=aux6-aux5;
                }
            }
            else if(aux==4){
                printf("\ndigite quantas cotas deseja comprar: ");
                scanf("%d",&aux5);
                fflush(stdin);
                aux5=aux5*100;
                if(aux6-aux5<0){
                    printf("saldo insuficiente para comprar as cotas");
                }
                else if(aux6-aux5>=0){
                    aux6=aux6-aux5;
                }
            }
            else{
                printf("escolha invalida");
            }
        }
        else if(e==4){//quarta questao
            printf("\ndigite um numero: ");
            scanf("%f",&aux2);
            for(int i=1;i<=aux2;i++){// alculo da expressao desejada
                if(i>1){
                    for(int j=1;j<=i){
                        aux3+=j;
                    }
                }
                rF+=1.0/aux3;
            }
        printf("\n%.2f",rF);
        }
    }while(e<5&&e>0);
    return 0;
}
