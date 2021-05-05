/*
1. Faça um programa para imprimir:
Exemplo de Saída:
1
1 2
1 2 3
.....
1 2 3 ... n
para um n informado pelo usuário. Use uma função que receba um valor n inteiro
imprima até a n-ésima linha.
*/
#include<stdio.h>

void imprimirNLinhas(int n); 

int main(){
    
    imprimirNLinhas(9);
    return 0; 
}

void imprimirNLinhas(int n)
{  
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
          printf("%i ", j);
        }
         printf("\n");
    }   
}
