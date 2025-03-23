/* Lab 02
    Autor: Samuel Lucas
*/

int main(){
    /*Primeiramente é declarada 5 variáveis do tipo long int para valores que necessitam de uma maior capacidade de memória, sendo respecticvamente o número de estudantes(n), a razão entre certificados e diplomas(k), o número de estudantes que recebem diplomas(d), número de estudantes que recebem certificados(c) e o número de estudantes que não ganharam nada
    */
    long long int n, k, d, c, nw;
 
    /*Agora é lido o número total de estudantes e o resultado da razão entre c e d
    */
    scanf("%lld %lld", &n, &k);
 
    /*Esse if verifica se d é maior que n, pois se d for maior que n significa que não há vencedores e d recebe o valor 0, se não for vai para uma equação descobre o valor d, pois sabendo o valor de d, conseguimos calcular o valor de c o isolando na razão com d, pois já sabemos o valor de k como demonstrado abaixo
    */
      if (2 * (1 + k) > n) {
        d = 0;
    } else {
        d = n / (2 * (1 + k));
    }
    c = k * d;
    
    /*Essa equação calcula a diferença do total de alunos pela quantidade de alunos que ganharam ou um certificado ou um diploma ou os dois, descobrindo assim quem não ganhou nada
    */
    nw = n - (d + c);
 
    /*Por fim é printado os valores da quantidade de diplomas, certificados e não ganhadores
    */
    printf("%lld %lld %lld\n", d, c, nw);
 
    return 0;
    
    
}
