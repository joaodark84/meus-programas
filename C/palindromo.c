#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int checapal(char pal[]){
    for(int i=0,j=strlen(pal)-1;i<strlen(pal)/2;i++,j--){
        if(pal[i]!=pal[j]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[1000],finalizador[]="FIM";
    int n;
    do{
        scanf(" %[^\r\n]",s);
        printf("%d\n",strlen(s));
	if(strcmp(s,finalizador)!=0){
            n=checapal(s);
	}
        if(n==1){
            printf("SIM\n");
        }
        else if(n==0){
            printf("NAO\n");
        }
    }while(strcmp(s,finalizador)!=0);
    return 0;
}