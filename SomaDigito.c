#include <stdio.h>
#include <stdbool.h>

int somaDigito(int n){
    if(n == 0){
        return 0;
    }else{
        return(n % 10 + somaDigito(n / 10));
    }
}

int main(){
    int n;
    int resultado;
    
    while(1){
        //essa variável recebe o valor de retorno do scanf para evitar loop infinito caso a entrada seja invállida
        resultado = scanf("%d", &n);
        //aqyu eu verifico se o valor de retorno do scan é diferente de 1, se for diferente, eu quebro o loop
        if(resultado != 1)break;
        
        printf("%d\n", somaDigito(n));
    }
    
    return 0;
}