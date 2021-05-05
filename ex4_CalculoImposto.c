/**
 * Faça um programa com uma função chamada somaImposto. A função possui dois
parâmetros formais: taxaImposto, que é a quantia de imposto sobre vendas
expressa em porcentagem e o custo, que é o custo de um item antes do imposto. A
função retorna o valor final do item: valor_final = custo + imposto.
 * 
*/
#include<stdio.h>

float somaImposto( float custo , float taxaImposto );

int main(){

    float soma = somaImposto( 100.0 , 50.0 );

    printf("%.2f", soma);
    return 0;
}

float somaImposto( float custo , float taxaImposto )
{
    float valor_final = custo + (custo * taxaImposto / 100);
    //  valor_final = (1 + taxaImposto / 100) * custo; 
    return valor_final;
}