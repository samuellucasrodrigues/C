#include <stdio.h>
#include <stdbool.h>
#define true 1
#define false 0

bool vogal(char c)
{
    int i = 0;
    bool check = 0;
    if ((c == 'A') || (c == 'a') || (c == 'E') || (c == 'e') || (c == 'I') || (c == 'i') || (c == 'O') || (c == 'o') || (c == 'U') || (c == 'u'))
    {
        check = 1;
    }
    else
    {
        check = 0;
    }
    i++;
    return check;
}

bool ehVogal(char *s, int i) {
    if (s[i] == '\0') {
        return true; 
    }
    if (!vogal(s[i])) {
        return false;
    }
    return ehVogal(s, i+1); 
}

bool ehCons(char *s, int i) {
    if (s[i] == '\0') return true;
    if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
        return false;
    if (vogal(s[i])) 
        return false;
    return ehCons(s, i+1);
}


bool ehInt(char *s, int i) {
    if (s[i] == '\0') return (i > 0);
    if (!(s[i] >= '0' && s[i] <= '9')) return false;
    return ehInt(s, i+1);
}


bool ehFloat(char *s, int i, int cont) {
    if (s[i] == '\0') {
        return (cont <= 1 && i > 0);
    }
    if (s[i] >= '0' && s[i] <= '9') {
        return ehFloat(s, i+1, cont);
    } else if (s[i] == '.' || s[i] == ',') {
        return ehFloat(s, i+1, cont+1);
    } else {
        return false;
    }
}


bool equals(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return false;
        i++;
    }
    return (s1[i] == '\0' && s2[i] == '\0');
}

int main()
{
    char linha[1000];

    while (fgets(linha, 1000, stdin) != NULL)
    {
        for (int i = 0; linha[i] != '\0'; i++)
        {
            if (linha[i] == '\n')
            {
                linha[i] = '\0';
                break;
            }
        }

        if (equals(linha, "FIM"))
        {
            break;
        }

        printf("%s %s %s %s\n",
               ehVogal(linha,0) ? "SIM" : "NAO",
               ehCons(linha,0) ? "SIM" : "NAO",
               ehInt(linha,0) ? "SIM" : "NAO",
               ehFloat(linha,0,0) ? "SIM" : "NAO");
    }

    return 0;
}