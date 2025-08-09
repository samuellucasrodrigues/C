#include <stdio.h>

int pa(int n, int a, int r){
    if (n == 1)return a;
    else return pa(n - 1,a, r) + r;
}

int main(){
    int n, a, r;

    scanf("%d %d %d", &n, &a, &r);

    printf("%d", pa(n,a,r));

    return 0;
}