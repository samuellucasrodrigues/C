int missingNumber(int* nums, int numsSize) {
    int soma1 = 0,result = 0, soma2 = 0;
    /*Calcula a soma real, de todos os números do vetor*/
    for(int i=0;i < numsSize;i++){
        soma1 += nums[i];
    }
    /*Calcula a soma esperada, a partir do tamanho da matriz*/
    for(int i=numsSize;i > 0;i--){
        soma2 += i;
    }
    /*Calcula a diferença entre a soma esperada e a real*/
    result = soma2 - soma1;
    /*Retorna a diferença*/
    return result;
}