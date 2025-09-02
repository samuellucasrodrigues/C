#include <stdio.h>

int pg(int a, int r, int n) {
    if (n == 1) return a;
     else return r * pg(a, r, n - 1); 
}

int main() {
    int a, r, n;
    scanf("%d %d %d", &a, &r, &n);
    printf("%d\n", pg(a, r, n));
    return 0;
}