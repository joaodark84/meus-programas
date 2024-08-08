#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e,nmes;//declaracao de variaveis
    float sal;
    do{
        printf("[1]novo salario\n[2]ferias\n[3]decimo terceiro\n[4]sair\ndigite sua escolha: ");//menu
        scanf("%d",&e);
        if(e==1){//1 opcao
            printf("digite seu salario: ");
            scanf("%f",&sal);
            if(sal<1000&&sal>0){
                sal=sal*0.15;
            }
            else if(sal<=2000&&sal>=1000){
                sal=sal*0.10;
            }
            else if(sal>2000){
                sal=sal*0.5;
            }
            else{
                printf("numero invalido");
            }
        }//2 opcao
        if(e==2){
            printf("digite seu salario: ");
            scanf("%f",&sal);
            sal=sal*0.33;
        }
        if(e==3){//3opcao
            printf("digite seu salario: ");
            scanf("%f",&sal);
            do{
                printf("digite o numero de meses: ");
                scanf("%d",&nmes);
                if(nmes>12||nmes<1){
                    printf("por favor digite um numero de meses valido");
                }
                sal=(sal*nmes)/12;
            }while(nmes>12||nmes<1);
        }
    }while(e<4&&e>0);
    return 0;
}
