#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    while (n % 2 == 0) n = n / 2;
    while (n % 3 == 0) n = n / 3;
    while (n % 5 == 0) n = n / 5;

    if (n == 1) printf("true\n");
    else printf("false\n");

    return 0;
}