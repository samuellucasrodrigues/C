int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {

    /*Número de linhas da matriz original*/
    int m = matSize;          
    /* Número de colunas da matriz original*/
    int n = matColSize[0];  

    /*Verifica se o reshape é viável, se não for possível, retorna a matriz original*/
    if (m * n != r * c) {     
        *returnSize = m;       
        *returnColumnSizes = matColSize; 
        return mat;       
    }

    /*Aloca a nova matriz no formato r x c*/ 
    int** newMat = malloc(r * sizeof(int*));  
    *returnColumnSizes = malloc(r * sizeof(int));  
    *returnSize = r;  

    for (int i = 0; i < r; i++) {
        newMat[i] = malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    /*Preenche a nova matriz na ordem correta*/ 
    int k = 0; 

    for (int i = 0; i < m; i++) {      
        for (int j = 0; j < n; j++) {
            int row = k / c;
            int col = k % c;  
            newMat[row][col] = mat[i][j];  
            k++; 
        }
    }

    return newMat;  // Retorna a nova matriz 
}

