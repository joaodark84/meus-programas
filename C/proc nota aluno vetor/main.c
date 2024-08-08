#include <stdio.h>
#include <stdlib.h>
void addnotas(float notas[]){
    for(int i=0;i<10;i++){
        printf("digite sua %d nota: ",i+1);
        scanf("%f",&notas[i]);
    }
}
void medianotas(float notas[]){
    float m=0;
    int numN=0;
    for(int i=0;i<10;i++){
        m+=notas[i];
    }
    m=m/10;
    for(int i=0;i<10;i++){
        if(notas[i]>m)
            numN++;
    }
    printf("\n A media da sala e %.2f\nO numero de alunos acima da media e %d",m,numN);
}
int main()
{
    float notas[10];
    addnotas(notas);
    medianotas(notas);
    return 0;
}
