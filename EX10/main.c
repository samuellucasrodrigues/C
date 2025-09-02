#include <stdio.h>

int main(){
    float x,r=0,y;

    scanf("%f %f", &x, &y);

    r = x + (x * (y/100.00));

    printf("Salario: %.2f\n", r);

    return 0;
}