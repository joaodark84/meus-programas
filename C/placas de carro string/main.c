#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int checaplaca(char x[]){
    int cont=0;
    if(strlen(x)>8){
        printf("\nnumero invalido");
    }
    for(int i=0;i<7;i++){
        if(i<3||i==4){
            if(x[i]>='A'&&x[i]<='Z'){
                cont++;
            }
        }
        else if(i==3||i>4){
            if(x[i]>='0'&&x[i]<='9'){
                cont++;
            }
        }
    }
    if(cont==7){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int r=2;
    char x[8];
    do{
        printf("\ndigite sua placa: ");
        gets(x);
        r=checaplaca(x);
        if(r==1)
            printf("\ncorreto");
        if(r==0)
            printf("\nincorreto");
    }while(strcmp(x,"fechar\n")!=0);
    return 0;
}
