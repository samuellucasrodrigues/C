#include <stdio.h>

int main(){
    int x=0, y=0;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("Soma: %d\n", x + y);
    printf("Subtracao: %d\n", x - y);
    printf("Divsao: %d\n", x / y);
    printf("Multiplicacao: %d\n", x * y);
    printf("Resto: %d\n", x % y);

    return 0;
}