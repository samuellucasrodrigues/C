#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void numparalet(int col, char *r) {
    int i = 0;
    char temp[20];
    
    while (col > 0) {
        col--;
        temp[i++] = 'A' + (col % 26);
        col /= 26;
    }
    
    if (i == 0) {
        temp[i++] = 'A'; // Caso col = 0 (não deve ocorrer pelo problema)
    }
    
    // Inverte o resultado
    for (int j = 0; j < i; j++) {
        r[j] = temp[i - j - 1];
    }
    r[i] = '\0';
}

int letparanum(char *col) {
    int resultado = 0;
    for (int i = 0; col[i]; i++) {
        resultado = resultado * 26 + (col[i] - 'A' + 1);
    }
    return resultado;
}

int is_rxcy_format(char *s) {
    if (s[0] != 'R') return 0;
    
    int i = 1;
    if (!isdigit(s[i])) return 0;
    
    while (isdigit(s[i])) i++;
    
    if (s[i] != 'C') return 0;
    i++;
    
    if (!isdigit(s[i])) return 0;
    
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        char input[20];
        scanf("%s", input);
        
        if (is_rxcy_format(input)) {
            // Formato RXCY -> converte para BC23
            int row, col;
            sscanf(input, "R%dC%d", &row, &col);
            char letters[20];
            numparalet(col, letters);
            printf("%s%d\n", letters, row);
        } else {
            // Formato BC23 -> converte para RXCY
            int row = 0;
            int i = 0;
            char letters[20] = {0};
            
            while (isalpha(input[i])) {
                letters[i] = input[i];
                i++;
            }
            letters[i] = '\0';
            
            // Extrai o número da linha
            while (isdigit(input[i])) {
                row = row * 10 + (input[i] - '0');
                i++;
            }
            
            printf("R%dC%d\n", row, letparanum(letters));
        }
    }
    
    return 0;
}