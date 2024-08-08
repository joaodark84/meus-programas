#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preg,vtotal,vpreg;
    printf("digite o numero de pregos desejado: ");
    scanf("%f",&preg);
    vpreg=preg*0.5;
    // definicao de variaveis
    if(preg>=101&&preg<=200){
        vtotal=vpreg*0.1;
        }
    else if(preg>=201&&preg<=300){
        vtotal=vpreg*0.2;
    }
    else if(preg>=301&&preg<=400){
        vtotal=vpreg*0.3;
    }
    else if(preg>401){
        vtotal=vpreg*0.4;
    }
    else if(preg>=0&&preg<=100){
        vtotal=vpreg;
    }
    else{
        printf("digite um numero positivo\n");
    }
    printf("%.2f",vtotal);
    // resolucao dos problemas
    return 0;
}
