#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void contavog(char x[],int c[]){
    for(int i=0;i<5;i++){
        c[i]=0;
    }
    for(int i=0;i<strlen(x);i++){
        if(x[i]=='a'||x[i]=='A'){
            c[0]++;
        }
        else if(x[i]=='e'||x[i]=='E'){
            c[1]++;
        }
        else if(x[i]=='i'||x[i]=='I'){
            c[2]++;
        }
        else if(x[i]=='o'||x[i]=='O'){
            c[3]++;
        }
        else if(x[i]=='u'||x[i]=='U'){
            c[4]++;
        }
    }
}

int main()
{
    char x[50];
    int cont[5];
    gets(x);
    contavog(x,cont);
    for(int i=0;i<5;i++){
        printf("%d ",cont[i]);
    }
    return 0;
}
