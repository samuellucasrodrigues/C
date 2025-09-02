#include <stdio.h>
#include <stdlib.h>

// Função para calcular o MDC 
int mdc(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, f = 0;
    scanf("%d", &n);

    // Alocação dinâmica para o vetor
    int *v = (int*) malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Leitura do primeiro número e inicialização do MDC
    scanf("%d", &v[0]);
    int md = v[0];

    // Ler os demais números e calcular o MDC de todos
    for (int i = 1; i < n; i++) {
        scanf("%d", &v[i]);
        md = mdc(md, v[i]); // Atualiza o MDC
    }

    // Verifica se o MDC está presente em v
  
    for (int i = 0; i < n; i++) {
        if (v[i] == md) {
            f = 1;
            break;
        }
    }

    // Saída do resultado
    printf("%d\n", f ? md : -1);

    // Libera a memória alocada
    free(v);

    return 0;
}
