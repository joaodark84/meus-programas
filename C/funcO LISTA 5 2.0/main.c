#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float numerator(int pos) {
    return pow(2,pos);
}

float denominator(int pos, float value) {
    pos++;
    return value - (33 - 2 * pos);
}

int main()
{
    float result = 0;
    float division = 0;
    float value = 256;
    for(int n = 0; n <= 14; n++) {
        value = denominator(n, value);
        division = numerator(n) / value;
        result = result + division;
        printf("%.0f / %.0f = %.4f \n", numerator(n), value, division);
    }
    printf("%.4f\n", result);
    return 0;
}
