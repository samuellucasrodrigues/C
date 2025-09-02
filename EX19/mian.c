#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, s, ar;

    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    ar = sqrtf(s * (s - a ) * (s - b) * (s - c));

    printf("Area: %.2f\n", ar);

    return 0;
}