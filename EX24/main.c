#include <stdio.h>

int main(){
    int x, r, d;

    scanf("%d", &x);

    d = x / 360;

    r = x % 360;

    if (d > 0)
    {
        printf("%d voltas mais %d graus no sentido antihorario", d, r);
    }else if (d < 0)
    {
        printf("%d voltas mais %d graus no sentido horario", d, r);
    }else{
        ("0 voltas\n");
    }
    
    return 0;
    

}