#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool equals(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');
}

void split(char linha[], char s1[], char s2[]) {
    int i = 0, j = 0, k = 0;

    while (linha[i] != '-' && linha[i] != '\0') {
        if (linha[i] != ' ') { 
            s1[j++] = linha[i];
        }
        i++;
    }
    s1[j] = '\0';

    while (linha[i] == '-' || linha[i] == ' ') {
        i++;
    }

    while (linha[i] != '\0') {
        if (linha[i] != ' ') { 
            s2[k++] = linha[i];
        }
        i++;
    }
    s2[k] = '\0';
}

int size(char *string) {
    int tam = 0, i = 0;
    while (string[i] != '\0') {
        tam++;
        i++;
    }
    return tam;
}

void lower(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32;
        }
        i++;
    }
}

bool isAnagram(char *s, char *t) {
    int v[26] = {0};

    lower(s);
    lower(t);

    if (size(s) != size(t))
        return false;

    for (int i = 0; i < size(s); i++) {
        v[s[i] - 'a']++;
        v[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (v[i] != 0)
            return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char linha[100];
    char s1[50], s2[50];

    while (fgets(linha, 100, stdin) != NULL) {

        for (int i = 0; linha[i] != '\0'; i++) {
            if (linha[i] == '\n') {
                linha[i] = '\0';
                break;
            }
        }

        if (equals(linha, "FIM")) {
            break;
        }

        split(linha, s1, s2);

        if (isAnagram(s1, s2)) {
            printf("SIM\n");
        } else {
            printf("NÃO\n");
        }
    }

    return 0;
}