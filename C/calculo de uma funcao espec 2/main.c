#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float numerador(int p) {
    float val = pow(2, p);
    return val;
}

float denominador(int p, float vala) {
    p = p + 1;
    float val = vala - (31 - (p - 1)* 2);
    return val;
}

int main()
{
    float den = 256,s;
    for(int i=0;i<=14;i++){
        den = denominador(i,den);
        s+=numerador(i)/den;
    }
    printf("%f",s);
    return 0;
}
