#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void tempe(int v[]){
    int mx=0,mn=0,med,s,abm=0;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        v[i]=18+(rand()%23);
        s+=v[i];
        if(v[i]<mn){
            mn=v[i];
        }
        else if(v[i]>mx){
            mx=v[i];
        }
    }
    med=s/10;
    for(int i=0;i<10;i++){
        if(v[i]<med){
            abm++;
            }
        }
    printf("%d %d %d %d",mx,mn,med,abm);
}

int main()
{
    int vet[10];
    tempe(vet);
    return 0;
}
