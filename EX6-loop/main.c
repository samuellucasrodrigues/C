#include <stdio.h>

int main(){
    int s=0, m=0, h=0;

    scanf("%d", &s);

    while(s >= 60){
        m = s / 60;
        s = s % 60;
    }
    
    while(m >= 60){
        h = m / 60;
        m = m % 60;
    }

    printf("Horas: %d\n", h);
    printf("Minutos: %d\n", m);
    printf("Segundos: %d\n", s);

    return 0;
}