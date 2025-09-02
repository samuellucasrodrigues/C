#include <stdio.h>

int tamanho(char texto[]) {
    int tamanho = 0;
    while (texto[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}


int Palindromo(char texto[], int inicio, int fim) {
    if (inicio >= fim) {
        return 1;
    }
    
    if (texto[inicio] != texto[fim]) {
        return 0;
    }
    
    return Palindromo(texto, inicio + 1, fim - 1);
}

int main() {
    char linha[1000];
    
    while (1) {
        int i = 0;
        char c;
        
        while ((c = getchar()) != '\n' && c != EOF) {
            if (i < 999) {
                linha[i] = c;
                i++;
            }
        }
        linha[i] = '\0'; 
        
        int fim = 1;
        if (linha[0] != 'F' || linha[1] != 'I' || linha[2] != 'M' || linha[3] != '\0') {
            fim = 0;
        }
        
        if (fim == 1) {
            break;
        }
        
        int tam = tamanho(linha);
        int resultado = Palindromo(linha, 0, tam - 1);
        
        if (resultado == 1) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }
    
    return 0;
}