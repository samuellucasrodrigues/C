#include <stdio.h>

void m(int a,int b,int c, int *maior, int *menor){
    *maior = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    *menor = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

int main(){
    int a, b , c, maior, menor;

    scanf("%d %d %d", &a, &b, &c);

    m(a, b , c, &maior, &menor);
    
    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}