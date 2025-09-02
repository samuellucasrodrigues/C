        #include <stdio.h>
        #include <stdlib.h>

        int main(){
            int n,a=0,d=0;
            char *str=NULL;

            scanf("%d", &n);

            str = malloc((n+1) * sizeof(char));

            scanf("%s", str);

            for(int i=0; i < n ; i++){
                if((str[i] == 'A') || (str[i] == 'a')){
                    a++;
                }else if((str[i] == 'D') || (str[i] == 'd'))
                {
                    d++;
                }
            }

            if(a > d)printf("Anton\n");
            else if(d > a)printf("Danik\n");
            else printf("Friendship\n");

            free(str);
            return 0;
        }