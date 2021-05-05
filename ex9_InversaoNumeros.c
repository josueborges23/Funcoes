#include <stdio.h>
//constante
#define constante valor

int pow(int base, int exp);
int inverterValor ( int valor );
int calculaDigitos ( int valor );

int main()
{
    const int numero = 10; // constante 
    int valor, digitos, valorInverso;

    printf("Digite um valor: ");
    scanf("%i",&valor);

    valorInverso = inverterValor(valor);
    
    printf("O valor reverso de %i e %i", valor ,valorInverso);
    return 0;   
}

int inverterValor (int valor)
{

    int qtdDigitos = calculaDigitos ( valor );
    int saida=0;

    printf("Digitos: %d\n", qtdDigitos);
    for(int contador = qtdDigitos - 1; contador >= 0 ; contador--)
    {

        printf("Contador: %i\n", contador);

        printf("pow de 10 ^ %i: %i\n", contador,  pow(10, contador));

        /// Obtem os digitos
       int digito = valor / pow(10, contador);
       valor -= (digito * pow(10, contador));
       printf("Digito: %i\n", digito);

       ///Insere em saida
       saida += digito * pow (10, qtdDigitos - contador - 1);
       printf("Saída: %i\n", saida);

    }
    return saida;
}

int calculaDigitos (int valor)
{  
    int contador = 0;   
   
    while(valor >= 1){
        printf("Valor: %i\n", valor);
        valor = valor / 10;
        contador++;
    }
    return contador;
}

int pow(int base, int exp){
    int pot = 1;
    for(int i = 0; i < exp; i++)
        pot = pot * base;
    return pot;
}