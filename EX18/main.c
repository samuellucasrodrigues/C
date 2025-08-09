#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    printf("%c\n", ('N' * (n < 60)) + ('S' * (n >= 60)));

    return 0;
}