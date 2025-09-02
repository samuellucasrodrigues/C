#include <stdio.h>
#include <math.h>

int main(){
    int x1, x0, y1,y0;
    float d;

    scanf("%d %d %d %d", &x1, &x0, &y1, &y0);

    d = sqrtf(((x1 - x0) * (x1 - x0)) + ((y1 - y0) * (y1 - y0)));

    printf("%.2f\n", d);

    return 0;
}