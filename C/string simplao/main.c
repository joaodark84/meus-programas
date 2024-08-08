#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int val(char ch[],int *n){
    int v,p=0;
    for(int i=0;i<5;i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'){
            v++;
        }
        else if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'){
            v++;
        }
        else if(isdigit(ch[i])){
            p++;
        }
    }
    *n=p;
    return v;
}
int main()
{
    int r,n;
    char x[5]="a3d4u";
    r=val(x,&n);
    printf("%d,%x",r,n);
    return 0;
}
