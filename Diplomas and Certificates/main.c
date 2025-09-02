#include <stdio.h>

int main()
{
    long long int n, k, d, c, nw;

    scanf("%lld %lld", &n, &k);

    if (2 * (1 + k) > n)
    {
        d = 0;
    }
    else
    {
        d = n / (2 * (1 + k));
    }
    c = k * d;

    nw = n - (d + c);

    printf("%lld %lld %lld\n", d, c, nw);

    return 0;
}
