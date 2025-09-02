int* getRow(int rowIndex, int* returnSize) {
    /* Define o tamanho da linha*/
    *returnSize = rowIndex + 1;
    
    /* Aloca memória para a linha que será retornada */
    int *row = malloc((*returnSize) * sizeof(int));
    
    /* O primeiro elemento de qualquer linha é sempre 1 */
    row[0] = 1;
    
    /* Preenche os elementos restantes da linha usando a fórmula de combinação 
    e é usado long no espaço do cálculo para não ocorrer overflow */
    for(int i = 1; i <= rowIndex; i++) {
        row[i] = (long)row[i-1] * (rowIndex - i + 1) / i;
    }
    
    /* Retorna a linha do Triângulo de Pascal */
    return row;
}