#include <stdio.h>
#include <math.h>

/*
Faça uma função que informe a quantidade de dígitos de um determinado número
inteiro informado.
*/

int calculaDigitos( int numero );

int main()
{

    int valor, digitos;

    printf("Digite um valor: ");
    scanf("%i",&valor);

    digitos = calculaDigitos(valor);

    printf("O valor digitado \"%i\" possui %i digitos." , valor , digitos);

    return 0;
}


int calculaDigitos( int valor )
{
    valor = abs(valor);
    int contador = 1;
    
    while ( (valor / pow( 10 , contador )) > 1)
    {    
        contador++;
    }
    
    /*
    while(valor > 1){
        valor = valor / 10;
        contador++;
    }*/

    return contador;
}