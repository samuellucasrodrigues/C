#include <stdio.h>

int main(){
    int n, cont;

    scanf("%d", &n);
    for(int i=n; i<=0; i--){

        if(n % 10 == 0){
            n /= 10;
            cont++;
        }else if(n % 10 == 1){
            n = (n / 10) - 1; 
            cont++;
        } 
    }
    printf("%d", cont);
    return 0;
}