#include <stdio.h>

int main(){
    int n,par = 0,impar = 0;

    scanf("%d", &n);

    while (n > 0) {
        int i = n % 10; 
        if (i % 2 == 0) {
            par += i;
        } else {
            impar += i;
        }
        n /= 10;
    }

    printf("%d\n", par * impar);

    return 0;

}