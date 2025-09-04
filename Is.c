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

bool ehVogal(char *s)
{
    if (s[0] == '\0')
        return false;
    int i = 0;
    bool check = 1;

    while (s[i] != '\0')
    {
        if (((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
        {
            if (!(vogal(s[i])))
            {
                check = 0;
                break;
            }
        }
        else
        {
            check = 0;
            break;
        }
        i++;
    }

    return check;
}

bool ehCons(char *s)
{
    if (s[0] == '\0')
        return false;
    int i = 0;
    bool check = 1;

    while (s[i] != '\0')
    {
        if (((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
        {
            if (vogal(s[i]))
            {
                check = 0;
                break;
            }
        }
        else
        {
            check = 0;
            break;
        }
        i++;
    }

    return check;
}

bool ehInt(char *s)
{
    if (s[0] == '\0')
        return false;

    int i = 0;
    bool check = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            check = 1;
        }
        else
        {
            check = 0;
            break;
        }
        i++;
    }
    return check;
}

bool ehFloat(char *s)
{
    if (s[0] == '\0')
        return false;

    int i = 0, cont = 0;
    bool check = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            check = 1;
        }
        else if (s[i] == ',' || s[i] == '.')
        {
            cont++;
        }
        else
        {
            check = 0;
            break;
        }
        i++;
    }

    if ((cont <= 1) && (check == 1))
    {
        check = 1;
    }
    else
    {
        check = 0;
    }

    return check;
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
               ehVogal(linha) ? "SIM" : "NAO",
               ehCons(linha) ? "SIM" : "NAO",
               ehInt(linha) ? "SIM" : "NAO",
               ehFloat(linha) ? "SIM" : "NAO");
    }

    return 0;
}