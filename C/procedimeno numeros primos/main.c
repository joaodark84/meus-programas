#include <stdio.h>
#include <stdlib.h>
void primo(int x){
    int a=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){//descobre numero de divisores
            a++;
        }
    }
    if(a==2){
        printf("seu numero e primo");//aparece se primo
    }
    else{
        printf("seu numero nao e primo");//aparece se nao for primo
    }
}
int main()
{
    int x;
    printf("digite seu numero: ");
    scanf("%d",&x);//salva um numero
    primo(x);//comeca o procedimento
    return 0;
}
