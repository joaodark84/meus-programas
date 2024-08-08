#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nf,np,m,mm;
    float s,ms=0,mds=0,mms,smin,slm=0;
     printf("digite o numero de pessoas entrevistadas: \n");
     scanf("%d",&np);
    for(int i=1;i<=np;i++){
         printf("digite o salario e numero de filhos separaos por( ): \n");
         scanf("%f %d",&s,&nf);
         mds+=s;
         m+=nf;
         if(ms<=s){
            ms=s;
         }
         if(s<=1212){
            if(s<0){
                break;
            }
            else{
                slm+=1;
            }
         }
    }
         mm=m/np;
         mms=mds/np;
         smin=(slm==0?0:slm/100);

          printf("%.2f,%d,%.2f,%.2f",mms,mm,ms,smin);









    return 0;
}
