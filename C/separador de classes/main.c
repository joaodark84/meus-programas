#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,pos=0,neg=0,zero=0,porP,porN,por0;
    do{
        printf("\ndigite seu numero: ");
        scanf("%f",&x);
        if(x==0){
            zero++;
        }
        else if(x>0){
            pos++;
        }
        else{
            neg++;
        }
    }while(x!=-9999);
    porP=((pos*100)/(pos+neg-1+zero));
    porN=((neg-1*100)/(pos+neg-1+zero));
    por0=((zero*100)/(pos+neg-1+zero));
    printf("%.0f % positivos %.0f % negativos %.0f % zeros\n",porP,porN,por0);
    printf("%.0f %.0f %.0f",pos,neg-1,zero);

    return 0;
}
