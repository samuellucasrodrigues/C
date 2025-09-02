#include <stdio.h>

int main(){
    int x1, x2, x3, x4, a, b, c, m;

    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    m = x1;

    if (x2 > m) m = x2;
    if (x3 > m) m = x3;
    if (x4 > m) m = x4;

    a = m - x2;
    b = m - x3;
    c = m - x4;

    if(m == x2){
        a = m - x1;
        b = m - x3;
        c = m - x4;

    }else if(m == x3){
        a = m - x1;
        b = m - x2;
        c = m - x4;
    }else if(m == x4){
        a = m - x1;
        b = m - x2;
        c = m - x3;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;

}
