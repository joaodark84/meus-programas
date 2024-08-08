#include <stdio.h>
#include <stdlib.h>

int main()
{
    float med,mai=0,men=0,vam,vt,kw,vp,vpk,p;
    printf("digite o numero de pessoas: ");
    scanf("%f",&p);
    for(int i=1; i<=p; i++)
    {
        printf("\ndigite seu %d valor:\n",i);
        scanf("%f",&kw);
        if(kw<0)
        {
            printf("numero invalido");
        }
        else
        {
            if(kw<=30&&kw<100)
            {
                vp=(kw*1.90);
            }
            else if(kw>=100)
            {
                vp=(kw*3.95);
            }
            if(i==1)
            {
                mai=kw;
                men=kw;
            }
            else
            {
                if(mai<kw)
                {
                    mai=kw;
                }
                if(men>kw)
                {
                    men=kw;
                }
            }
            if(kw<30)
            {
                kw=vam+=1;
            }

            vpk+=kw;
            vt+=vp;
        }
    }
    med=vpk/p;
    printf("%.2f %.2f %.2f %.2f %.2f",med,men,mai,vam,vt);

    return 0;
}
