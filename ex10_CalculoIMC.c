#include <stdio.h>
//constante
#define constante valor

float calcularIMC ( int peso, int altura, char sexo );

int main()
{
    // const int numero = 10; // constante 
    int peso, altura;
    float imc;
    char sexo;


    printf("Digite um valor para o peso: ");
    scanf("%i",&peso);
    printf("Digite a altura em centimetros: ");
    scanf("%i",&altura);
    //printf("Digite o sexo ");
    //scanf("%c",&sexo);
    
    imc = calcularIMC( peso, altura, sexo);
    printf("Imc e: %f", imc);

    return 0;   
}

float calcularIMC (int peso, int altura, char sexo)
{
    float imc = peso / ( (altura / 100.0f) * (altura / 100.0f) );
    return imc;
}
