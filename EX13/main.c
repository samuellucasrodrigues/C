#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    printf("O angulo do poligono de %d lados e de %d graus", n, ((n-2)*180)/n);

    return 0;
    
}