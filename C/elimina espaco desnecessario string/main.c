#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void eliminaespaco(char x[]){
    int j=0;
    for(int i=0;i<strlen(x);i++){
        if(x[i]!=' '||j>0&&x[j-1]!=' ')
            x[j++]=x[i];
    }
    x[j]='\0';
}
int main()
{
    char x[100];
    fgets(x,10,stdin);
    eliminaespaco(x);
    printf("%s",x);
    return 0;
}
