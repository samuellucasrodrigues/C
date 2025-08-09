void moveZeroes(int* nums, int numsSize) {
    /*Contador de !0 na array - nz(não zeros)*/
    int nz = 0;
    
   /*Verifica quantos números são diferentes de 0 e os aloca na array*/
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[nz++] = nums[i];
        }
    }
    
    /*Por fim aloca 0 no resto da array até atingir o tamanho anterior*/
    for (int i = nz; i < numsSize; i++) {
        nums[i] = 0;
    }
}