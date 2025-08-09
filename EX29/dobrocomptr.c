#include <stdio.h>

void dobro(int *x){
    *x = (*x) * (*x);
}

int main(){
    int x;
    scanf("%d", &x);

    dobro(&x);

    printf("%d", x);

    return 0;
}