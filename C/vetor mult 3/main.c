#include <stdio.h>
#include <stdlib.h>
int mult3(int x[],int y[]){
    int ig=0,ig2=0,r=0;
    for(int i=0;i<5;i++){
        if(x[i]%3==0)
            ig++;
    }
    for(int i=0;i<5;i++){
        if(y[i]%3==0)
            ig2++;
    }
    if(ig==ig2){
        return r+1;
    }
    else{
        return r-1;
    }

}

int main()
{
    int x[5],y[5],r;
    for(int i=0;i<5;i++){
        printf("digite seus valores: ");
        scanf("%d",&x[i]);
    }
    for(int i=0;i<5;i++){
        printf("digite seus valores: ");
        scanf("%d",&y[i]);
    }
    r=mult3(x,y);
    printf("%d",r);
    return 0;
}
