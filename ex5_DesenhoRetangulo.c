/**
 *Construa uma função que desenhe um retângulo usando os caracteres ‘+’ , ‘−’ e ‘| ‘.
Esta função deve receber dois parâmetros, linhas e colunas, sendo que o valor por
omissão é o valor mínimo igual a 1 e o valor máximo é 20. Se valores fora da faixa
forem informados, eles devem ser modificados para valores dentro da faixa de forma
elegante.
*/

#include<stdio.h>

void desenhoRetangulo (int linhas , int colunas);

int main(){

    int linhas, colunas;

    printf("Digite o valor de linhas: \n");
    scanf("%i", &linhas);
    printf("Digite o valor de colunas: \n");
    scanf("%i", &colunas);

    desenhoRetangulo(linhas, colunas);
}

void desenhoRetangulo (int linhas , int colunas){    

    if(linhas<1 || linhas>20)
    {
        linhas = 3;
    }
    if(colunas<1 || colunas>20)
    {
        colunas = 3;
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {    
            //printf(" %i,%i", i, j);
               
            if((i == 0 && j == 0)||(i == 0 && j == colunas - 1)||
            (i == linhas - 1 && j == 0)||(i == linhas - 1 && j == colunas -1))
            {
                printf(" %c " , '+');
            }           
            else if((j == 0) || (j == linhas - 1)){
                printf(" %c " , '|');
            }    
            else
            {
                printf(" %c " , '-');
            }
                
        }
        printf("\n");
    }
}