/**Faça um programa, com uma função que necessite de três argumentos inteiros, e
que forneça a soma desses três argumentos.*/
#include<stdio.h>

int somar(int a, int b, int c);

int main(){

    int soma = somar(1, 2, 3);
    printf("%d", soma);
    return 0; 


}

int somar(int a, int b, int c){
    int soma = a + b + c;
    return soma;
}