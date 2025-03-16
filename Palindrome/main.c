#include <stdio.h>

int main()
{
    int x, w, y, z = 0;

    scanf("%d", &x);

    w = x;

    while (w > 0)
    {

        y = w % 10;
        z = (z * 10) + y;
        w /= 10;
    }

    if ((x != z) || (x < 0))
    {
        printf("false\n");
    }else{
        printf("true\n");
    }
    

    return 0;
}