#include <stdio.h>
#include <stdlib.h>
int dia(float r){
    float d;
    d=r+r;
    return d;
}
int per(float r){
    float PI=3.1415,p;
    p=2*PI*r;
    return p;
}
int are(float r){
    float PI=3.1415,ar;
    ar=PI*pow(r,2);
    return ar;
}
int main()
{
    float di,ar,pe,r;
    printf("digite o valor do raio: ");
    scanf("%f",&r);
    di=dia(r);
    pe=per(r);
    ar=are(r);
    printf("%.2f %.2f %.2f",di,pe,ar);
    return 0;
}
