#include <stdio.h>
#include <stdlib.h>

void calc(int *v,int n, int *min, float *med, int *max){
    if(n<=0) return;
    int soma = 0 ;
    *min = *max = v[0];
    for(int i=0;i<n;i++){
        soma += v[i];
        if(v[i] < *min) *min = v[i];
        if(v[i] > *max) *max = v[i];
    }
    *med = soma / n;
}

int main()
{
    int n,min,max;
    float med;
    scanf("%d", &n);
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &(v[i]));
    }

    calc(v, n, &min, &med, &max);

    printf("Minimo: %d\nMedia: %.2f\nMaximo: %d\n", min, med, max);
    free(v);
    return 0;
}