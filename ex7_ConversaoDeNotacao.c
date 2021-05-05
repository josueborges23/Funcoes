#include <stdio.h>

/*
Faça um programa que converta da notação de 24 horas para a notação de 12
horas. Por exemplo, o programa deve converter 14:25 em 2:25 P.M. A entrada é
dada em dois inteiros. Deve haver pelo menos duas funções: uma para fazer a
conversão e uma para a saída. Registre a informação A.M./P.M. como um valor ‘A’
para A.M. e ‘P’ para P.M. Assim, a função para efetuar as conversões terá um
parâmetro formal para registrar se é A.M. ou P.M.
*/

char retornaPeriodo(int horas);
int retornaHora(int horas);

int main(){

    int horas, minutos;
    char periodo;

    printf("Digite as horas: ");
    scanf("%i" , &horas);
    printf("Digite as minutos: ");
    scanf("%i" , &minutos);

    periodo = retornaPeriodo(horas);
    horas = retornaHora(horas);


    printf("%i:%i %c.M.", horas, minutos, periodo);   

    return 0;
}

/*
 00 - 12

> 12 => hora - 12
< 12 => hora
*/

int retornaHora(int horas)
{    
    if( horas > 12 && horas <= 23)
    {
        horas =  horas - 12;
    }
    else if( horas == 0 )
    {
        horas = 12;
    }
    
    return horas;    
}

char retornaPeriodo(int horas)
{
    if( horas >= 0 && horas <= 11 ){
        return 'A';
    }
    else{
        return 'P';
    }
}