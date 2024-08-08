#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("digite um caracter: ");
    scanf("%s",&x);
    //definicao de variavel
    if(isupper(x)){
        printf("maiuscula");
    }
    if(islower(x)){
        printf("minuscula");
    }
    else if(isdigit(x)){
        printf("numero");
    }
    //chacagem se e maiuscula minuscula ou numero

    return 0;
}
