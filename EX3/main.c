#include <stdio.h>

int main(){
    int b=0,h=0,a;

    printf("Altura:");
    scanf("%d", &h);
    printf("Base:");
    scanf("%d", &b);

    a = (b*h)/2;

    printf("Area do traingulo: %d\n", a);

    return 0;
}