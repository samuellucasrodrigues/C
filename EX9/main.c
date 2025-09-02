#include <stdio.h>

int main(){
    float a,b,h;

    scanf("%f %f %f", &h, &a, &b);

    printf("Seno de AB: %.2f\n", a/h);
    printf("Cosseno de AB: %.2f\n", b/h);
    printf("Tangente de AB: %.2f\n", a/b);
    printf("\n");
    printf("Seno de BA: %.2f\n", b/h);
    printf("Cosseno de BA: %.2f\n", a/h);
    printf("Tangente de BA: %.2f\n", b/a);

    return 0;

}