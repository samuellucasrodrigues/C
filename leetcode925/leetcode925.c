bool isLongPressedName(char* name, char* typed) {
    /*Se o tamanho da string name for maior que typed retorna falso*/
    if (strlen(name) > strlen(typed)) return false;
    
    int i = 0, j = 0;
    
    while (i < strlen(name) && j < strlen(typed)) {
        /*Em um loop que vai de 0 até o tamanho das strings name e typed, checa se os caracteres forem diferentes*/
        if (tolower(name[i]) != tolower(typed[j])) {
            /*Caso sejam diferentes, checa se o caractere diferente em typed é uma repetição*/
            if (j == 0 || tolower(typed[j]) != tolower(typed[j-1])) {
                /*Senão for repetição retorna falso*/
                return false;
            }
            j++;
        } else {
            i++;
            j++;
        }
    }
    
    /*Verifica se caracteres restantes no typed são repetições, se não for então retorna falso*/ 
    while (j < strlen(typed)) {
        if (tolower(typed[j]) != tolower(typed[j-1])) return false;
        j++;
    }
    
    /*Se i percorreu toda a name e não retornou falso até agora então retorna true*/
    return i == strlen(name);
}