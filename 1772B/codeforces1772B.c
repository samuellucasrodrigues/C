#include <stdio.h>
#include <stdlib.h>

/*Função para girar em 90 graus a matriz, usando uma variável temporária para trocar os valores de posição*/
void rotacao(int M[2][2]) {
    int t = M[0][0];
    M[0][0] = M[1][0];  
    M[1][0] = M[1][1]; 
    M[1][1] = M[0][1]; 
    M[0][1] = t;    
}

/*Função para checar se a matriz pode ser bonita ou não*/
int bonita(int M[2][2]) {
    return (M[0][0] < M[0][1] && M[1][0] < M[1][1] && 
            M[0][0] < M[1][0] && M[0][1] < M[1][1]);
}

int main()
{    
    /*É declarada uma variavel do tipo inteiro para saber a quantidade de testes*/
    int n;
    
    scanf("%d", &n);

    for(int k=0; k < n; k++){
/*Dentro do loop é declarada uma matriz estática de 2 por 2 e uma variável do tipo inteiro*/
        int M[2][2],b = 0 ;
/*Um loop para receber os valores da matriz*/
        for(int i=0; i < 2; i++){
            for(int j=0; j < 2; j++){
                scanf("%d", &M[i][j]);
            }
        }

/*Este loop vai checar se a matriz é bonita e se for b recebe 1 e isso é feito 4 vezes para testar todos os tipos de rotações da matriz*/
        for (int i = 0; i < 4; i++) {
            if (bonita(M)) {
                b = 1; 
            }
            rotacao(M); 
        }

        /*Por fim é printado se a matriz é bonita ou não*/
        printf("%s\n", b ? "YES" : "NO");
    }

    return 0;
}