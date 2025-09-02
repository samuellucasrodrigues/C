int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    /* Aloca memória para uma matriz triangulo */
    int **triangulo = malloc(numRows * sizeof(int *));
    
    /* Aloca memória para as linhas da matriz*/
    *returnColumnSizes = malloc(numRows * sizeof(int));
    
    /* Define o número total de linhas que serão retornadas */
    *returnSize = numRows;
    
    /* Loop para construir cada linha do triângulo */
    for(int i = 0; i < numRows; i++) {
        /* Aloca memória para a linha atual, que terá (i+1) elementos */
        triangulo[i] = malloc((i + 1) * sizeof(int));
        
        /* Armazena o tamanho desta linha no array returnColumnSizes */
        (*returnColumnSizes)[i] = i + 1;
        
        /* O primeiro e último elemento de cada linha são sempre 1 */
        triangulo[i][0] = 1;
        triangulo[i][i] = 1; 
        
        /* Preenche os elementos do meio da linha onde cada elemento é a soma dos dois elementos acima dele na linha anterior */
        for(int j = 1; j < i; j++) {
            triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
        }
    }
    
    /* Retorna triangulo*/
    return triangulo;
}