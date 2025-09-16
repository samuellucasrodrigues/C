#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quicksort(int esq, int dir, int *array)
{
    int i = esq, j = dir;
    int pivo = array[(esq + dir) / 2];

    while (i <= j)
    {
        do
        {
            printf("cmp(%d,%d)\n", array[i], pivo);
            i++;
        }while (array[i] < pivo);
        do
        {
            printf("cmp(%d,%d)\n", array[j], pivo);
            j--;
        }while (array[j] > pivo);
        if (i <= j)
        {
            swap(&array[i], &array[j]);
            i++;
            j--;
        }
    }
    if (esq < j)
        quicksort(esq, j, array);
    if (i < dir)
        quicksort(i, dir, array);
}

int main()
{
    int n;
    scanf("%d", &n);
    int *array = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Antes: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    quicksort(0, n - 1, array);

    printf("Depois: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    free(array);
    return 0;
}
