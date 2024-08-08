#include <stdio.h>
#include <stdlib.h>

   void trocar(int *num1, int *num2){
        int temp;
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
 }
 int main(){
    int a, b;
    a = 5;
    b = 10;
    printf ("\n\nEles valem %d, %d\n", a, b);
    trocar (&a, &b);
    printf ("\n\nEles agora valem %d, %d\n", a, b);
    return 0;
}
