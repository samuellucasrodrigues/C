#include <stdio.h>

int main(){
    float m, x, n, y;

    scanf("%f %f %f", &x, &y, &n);

    m = x * (1 + (y/100.00) * n);

    printf("Montante: %.2f\n", m);

    return 0;
}