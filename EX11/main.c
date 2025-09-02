#include <stdio.h>

int main(){
    float x, m, b;

    scanf("%f %f", &m, &b);

    x = (b * -1.00)/ m;

    printf("Raiz da equacao: %.2f\n", x);

    return 0;
}