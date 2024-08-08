#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N=3.7,T=9.807,V=8.87,tempoQ;//declaracao de variaveis
    printf("digite o tempo de queda em milisegundos: ");
    scanf("%f",&tempoQ);//salva o tempo digitado pelo usario
    tempoQ=tempoQ/1000;//transforma em milisegundos
    printf("tempo de queda na terra =%.2f m/s\ntempo de queda em venus =%.2f m/s\ntempo de queda em netuno= %.2f m/s \n",T*tempoQ,V*tempoQ,N*tempoQ);//mostra o resultado
    return 0;
}
