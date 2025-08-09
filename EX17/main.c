#include <stdio.h>

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%c\n", ('N' * (x % y != 0)) + ('S' * (x % y == 0)));
    
    return 0;
    
}