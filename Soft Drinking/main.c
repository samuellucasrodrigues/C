#include <stdio.h>

int main(){
    int n, k, l, c, d, p, nl, np;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int v, w, x, y, z, a;
    
    v = k * l;
    w = v / (n * nl);

    x = c * d;
    y = x / n;

    z = p / (n * np);

    a = w;

    if (y < a) a = y;
    if (z < a) a = z;

    printf("%d\n", a);
    
    return 0;
}