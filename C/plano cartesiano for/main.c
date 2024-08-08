#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;//declaracao de variaveis
    for(;;){
        printf("digite os valores da funcao: ");
        scanf("%d %d",&x,&y);//salva os numeros digitador pelo usuario
        fflush(stdin);
        if(x==0&&y==0){//para a repeticao no caso de 0 0
            break;
        }
        if(x>0){//mostra dois quadrantes
            if(y>0){
            printf("primeiro quadrante\n");
            }
            else{
                    printf("terceiro quadrante\n");
                }
        }
        if(x<0){//mostra os outros quadrantes
            if(y>0){
                printf("segundo quadrante\n");
        }
        else{
            printf("quarto quadrante\n");
            }
        }
    }
    return 0;
}
