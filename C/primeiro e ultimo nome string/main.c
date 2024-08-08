#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostra(char x[],char y[]){
    if(strcmp(x,y)<0){
        printf("%s\n%s",x,y);
    }
    else if(strcmp(x,y)>0){
        printf("%s\n%s",y,y);
    }
    else if(strcmp(x,y)==0){
        printf("%s %s",y,x);
    }
}
int main()
{
    int i=0;
    char x[20],a[20],b[20];
        do{
            i++;
            if(i!=1){
                strcpy(b,x);
                }
            printf("digite sua palavra: ");
            gets(x);
            if(i==1){
                strcpy(a,x);
            }
    }while(strcmp(x,"stop")!=0);
    mostra(a,b);

    return 0;
}
