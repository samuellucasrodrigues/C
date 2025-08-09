#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        int a, b, c, d, r = 0;

        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        if(b > a) r++;
        if(c > a) r++;
        if(d > a) r++;

        printf("%d\n", r);
        
    }
}