#include <stdio.h>

int main(){
int x1=0, x0=0, y1=0, y0=0;
float m=0.00;

scanf("%d %d %d %d", &x1, &x0, &y1, &y0);

m = (y1 - y0) / (x1 - x0);

printf("Angulacao da reta: %.2f\n", m);

return 0;

}