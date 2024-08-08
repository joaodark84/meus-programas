#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   float x,X,Y,y;
   printf("digite o valor de X");
   scanf("%f", &X);
   printf("digite o valor de x");
   scanf("%f",&x);
   printf("digite o valor de Y");
   scanf("%f",&Y);
   printf("digite o valor de y");//definicao de valores das incognitas inteiras
   scanf("%f",&y);
   float quadrado1,quadrado2,soma,raiz;
   quadrado1=X*X-2*X*x+x*x;
   quadrado2=Y*Y-2*Y*y+y*y;
   soma=quadrado1+quadrado2;
   raiz=sqrt(soma);
   printf("a distancia e %f",raiz);
    return 0;
}
