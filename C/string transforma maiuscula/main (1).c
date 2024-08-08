#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char trancaps(char s1[],char s2[]){
    strupr(s1);
    strupr(s2);
    strcat(s1,s2);
    printf("%s",s1);
    return s1;

}
int main()
{
    char x[20],y[10];
    printf("digite sua palavra de 9 letras: ");
    gets(x);
    printf("digite sua palavra de 9 letras: ");
    gets(y);
    trancaps(x,y);

    return 0;
}
