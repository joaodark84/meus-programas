#include <stdio.h>
#include <stdlib.h>
int mamei(int max,int min){
    if(min>max){
        return(printf("engracado ne "));
    }
    else{
        for(;min<=max;min++){
            if(min%2!=0){
              (printf("%d\n",min));
            }
        }
    }

}

int main()
{
    int m,mn;
    printf("digite seu valor max e min: ");
    scanf("%d %d",&m,&mn);
    mamei(m,mn);
    return 0;
}
