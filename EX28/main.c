#include <stdio.h>
#include <stdbool.h>
bool primo(int n){
    if (n ==  1) return false;
    else 
return n / primo(n-1);
}
int main()
{
    int n;

    scanf("%d", &n);
    n = n - 1;

    printf("%c", 'N' * primo(n) + 'S' * primo(n));

    return 0;
}
