#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sal,inter,op,dd=0,rd=0,rp=0,tp=0;
    printf("digite seu saldo: ");
    scanf("%d",&sal);//salva numero na variavel
    do{
        printf("\n[1]deposito em dinheiro\n[2]retirada em dinheiro\n[3]receber pix\n[4]transferencia pix\n[5]ver saldo\n[6]encerrar sessao\nescolha sua opcao: ");
        scanf("%d",&op);//escolhe opcao no menu
        switch(op){//cada opcao interaje coom o valor de uma forma
            case 1:
                printf("\ndigite o valor em dinheiro a ser depositado: ");
                scanf("%d",&inter);
                sal=sal+inter;
                dd++;
            break;
            case 2:
                printf("\ndigite o valor em dinheiro a ser sacado: ");
                scanf("%d",&inter);
                sal=sal-inter;
                rd++;
            break;
            case 3:
                printf("\ndigite o valor recebido no pix: ");
                scanf("%d",&inter);
                sal=sal+inter;
                rp++;
            break;
            case 4:
                printf("\ndigite o valor transferido no pix: ");
                scanf("%d",&inter);
                sal=sal-inter;
                tp++;
            break;
            case 5:
                printf("%d",sal);
            break;
            case 6://finaliza a sessao e mostra os valores
                if(sal==0){
                    printf("CONTA ZERADA");
                }
                else if(sal<0){
                    printf("CONTA ESTOURADA");
                }
                else{
                    printf("CONTA PREFERENCIAL\n");
                    printf(" numeros de pix \nrecebidos %d \nenviados %d \nnumero de transacoes no dinheiro \nsaques %d \ndepositos %d \nsaldo final %d",rp,tp,rd,dd,sal);
                }
            break;
            default:
                printf("opcao invalida");
        }
    }while(op!=6);
    return 0;
}
