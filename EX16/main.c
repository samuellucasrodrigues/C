#include <stdio.h>
#include <math.h>

int main(){
    float x, y, a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    x = (b * -1) / (2 * a);

    y = (a * pow(x,2.0)) + (b * x) + c;

    printf("x = %.2f, y = %.2f\n", x, y);

    return 0;
}