#include <stdio.h>
#include <math.h>

int main(){
    float r,p,a;

    scanf("%f", &r);

    p = 2 * M_PI * r;
    a = M_PI * pow(r,2.00);

    printf("Area: %f\n", a);
    printf("Perimetro: %f\n", p);

    return 0;
}