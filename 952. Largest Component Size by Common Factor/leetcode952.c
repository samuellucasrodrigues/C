#include <stdio.h>
#include <stdlib.h>

// Renomeei para menorDivisor pois é isso que a função faz
int menorDivisor(int n)
{
    if (n <= 1) return 1; // Trata casos especiais
    
    if (n % 2 == 0)
        return 2;
    
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }
    
    return n; // Se não encontrou divisores, o número é primo
}

void preencherDivisores(int *n, int *c)
{
    for(int i = 0; i < 20; i++){
        c[i] = menorDivisor(n[i]);
    }
}

int main()
{
    int *nums = malloc(20 * sizeof(int));
    int *cont = malloc(20 * sizeof(int));

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &nums[i]);
    }

    preencherDivisores(nums, cont); // Adicionei esta chamada

    int maior = cont[0];
    for (int i = 1; i < 20; i++)
    {
        if (cont[i] > maior)
        {
            maior = cont[i];
        }
    }

    printf("%d", maior);
    free(nums);
    free(cont);
    return 0;
}