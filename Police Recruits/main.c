
#include <stdio.h>

int main(){

    int r = 0,n,c = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int e;
        
        scanf("%d", &e);

        if(e == -1){
            
            if(r > 0)r--;
            else c++;
        }else {
            r += e;
        }
         
    }

    printf("%d\n", c);

    return 0;
}