/**
Faça um programa, com uma função que necessite de um argumento inteiro. A
função retorna o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, se seu
argumento for zero ou negativo.

*/
#include<stdio.h>

char positivoNegativo(int num);

int main(){
    
    int numero = -1;
    char posNeg = positivoNegativo( numero );
    printf("%c", posNeg);

    return 0;
}

char positivoNegativo(int num){

   char saida = 'P';
   if(num < 0){
    saida = 'N';
   }
   
    return saida;
}