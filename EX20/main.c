#include <stdio.h>

int main(){
    int x, r, n, s;

    scanf("%d %d %d", &x, &r, &n);

    s = x + (n - 1) * r;

    printf("%d\n", s);
    
    return 0;

}