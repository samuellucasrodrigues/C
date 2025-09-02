#include <stdio.h>

int main() {
    int v[100], s1[100], s2[100], s3[100];
    int c1 = 0, c2 = 0, c3 = 0, n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Separa um número negativo para s1
    int neg = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0 && neg == -1) { // Garantimos que pegamos apenas o primeiro negativo
            s1[c1++] = v[i];
            neg = i;
        }
    }

    // Separa s2 e s3 sem usar continue
    for (int i = 0; i < n; i++) {
        if (i != neg) { // Apenas ignoramos o índice do primeiro negativo
            if (v[i] == 0) {
                s3[c3++] = v[i]; // Todos os zeros vão para s3
            } else {
                s2[c2++] = v[i]; // Os demais números vão para s2
            }
        }
    }

    // Se s2 tiver um número ímpar de negativos, move um negativo para s3
    int ncont = 0;
    for (int i = 0; i < c2; i++) {
        if (s2[i] < 0) ncont++;
    }

    if (ncont % 2 == 1) {
        int x = -1;
        for (int i = 0; i < c2; i++) {
            if (s2[i] < 0 && x == -1) { // Pegamos apenas o primeiro negativo encontrado
                x = i;
            }
        }

        // Reorganiza s2 e move o negativo para s3
        if (x != -1) {
            s3[c3++] = s2[x];
            for (int i = x; i < c2 - 1; i++) {
                s2[i] = s2[i + 1];
            }
            c2--;
        }
    }

    // Imprime os valores
    printf("%d ", c1);
    for (int i = 0; i < c1; i++) printf("%d ", s1[i]);
    printf("\n");

    printf("%d ", c2);
    for (int i = 0; i < c2; i++) printf("%d ", s2[i]);
    printf("\n");

    printf("%d ", c3);
    for (int i = 0; i < c3; i++) printf("%d ", s3[i]);
    printf("\n");

    return 0;
}
