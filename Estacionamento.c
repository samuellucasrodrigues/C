#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Motorista
{
    int entrada, saida;
} Motorista;

typedef struct Celula{
    Motorista* m;
    struct Celula* prox;
}Celula;

Celula *topo = NULL;
int tam = 0;

Motorista *newMotorista(int ci, int si)
{
    Motorista *m = (Motorista *)malloc(sizeof(Motorista));
    m->entrada = ci;
    m->saida = si;
    return m;
}

void push(Motorista* m){
    Celula* i = (Celula*)malloc(sizeof(Celula));
    i->m = m;
    i->prox = topo;
    topo = i;
    tam++;
}

void pop()
{
    if (topo == NULL)
        return;
    Celula *tmp = topo;
    topo = topo->prox;
    free(tmp);
    tam--;
}

int main() {
    int n, k;
    while (scanf("%d %d", &n, &k), n || k) {
        Motorista *motoristas = (Motorista *)malloc(n * sizeof(Motorista));
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &motoristas[i].entrada, &motoristas[i].saida);
        }

        bool possivel = true;
        topo = NULL;
        tam = 0;

        for (int i = 0; i < n; i++) {
            while (topo != NULL && topo->m->saida <= motoristas[i].entrada) {
                pop();
            }
            
            if (topo != NULL && motoristas[i].saida > topo->m->saida) {
                possivel = false;
                break;
            }
            
            if (tam >= k) {
                possivel = false;
                break;
            }
            
            push(&motoristas[i]);
        }

        printf("%s\n", possivel ? "Sim" : "Nao");

        while (topo) pop();
        free(motoristas);
    }

    return 0;
}