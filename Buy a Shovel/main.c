#include <stdio.h>

int main(){
    int k, r, n = 1, i = 0;

    scanf("%d %d", &k, &r);

    while(i == 0){
        if(((n * k) % 10 == r) || ((n * k) % 10 == 0)){
            printf("%d\n", n);
            i=1;
        }else{
            n++;
        }
    }
    

    
}