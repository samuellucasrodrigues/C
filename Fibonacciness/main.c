#include <stdio.h>

int main(){
   int t;

    scanf("%d", &t);

    while(t>0){
        int a1, a2, a4, a5;
        int i=0, x, n;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);
        
        x = a1 + a2;
        if(x == a1 + a2){
            if(x == a1 + a2) i++;
            if(a4 == a2 + x) i++;
            if(a5 == x + a4) i++;
            n = i;
        }

        i = 0;
        x = a4 - a2;
        if(x == a4 - a2){
            if(x == a1 + a2) i++;
            if(a4 == a2 + x) i++;
            if(a5 == x + a4) i++;
            if(i > n) n = i;
        }

        i = 0;
        x = a5 - a4;
        if(x == a4 - a2){
            if(x == a1 + a2) i++;
            if(a4 == a2 + x) i++;
            if(a5 == x + a4) i++;
            if(i > n) n = i;
        }


        printf("%d\n", n);
        
        t--;
    
        } 
    
    return 0;
}