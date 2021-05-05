
/**
Faça um programa que use a função valorPagamento para determinar o valor a ser
pago por uma prestação de uma conta. O programa deverá solicitar ao usuário o
valor da prestação e o número de dias em atraso e passar estes valores para a
função valorPagamento, que calculará o valor a ser pago e devolverá este valor ao
programa que a chamou. O programa deverá então exibir o valor a ser pago na tela.
Após a execução o programa deverá voltar a pedir outro valor de prestação e assim
continuar até que seja informado um valor igual a zero para a prestação. Neste
momento o programa deverá ser encerrado, exibindo o relatório do dia, que conterá
a quantidade e o valor total de prestações pagas no dia. O cálculo do valor a ser
pago é feito da seguinte forma: para pagamentos sem atraso, cobrar o valor da
prestação. Quando houver atraso, cobrar 3% de multa, mais 0,1% de juros por dia
de atraso.
*/

#include<stdio.h>

float valorPagamento(float valorPrestacao, int diasAtraso);

int main( void ){

    float pagamento = 1;
    int atraso;

    do
    {
        printf("Insira o valor do pagamento: ");
        scanf("%f", &pagamento);

        printf("Insira os dias de atraso: ");
        scanf("%i", &atraso);
    
        pagamento = valorPagamento( pagamento , atraso );
        printf("Valor atualizado: %.2f \n" , pagamento);
    }
    while (pagamento != 0);

    return 0;

}


/**
 * valorPagamento - retorna o valor do pagamento mediante ao valor de atraso.
 * 
 * parametros:
 *      valorPrestacao - valor da prestacao do produto
 *      diasAtraso - dias de atraso da parcela
 * 
 * retorno:
 *      diasAtraso > 0: valorPrestacao + juro (0,1% dia) + multa (3%)
 *      diasAtraso == 0: valorPrestacao
 *      diasAtraso < 0: -1
 * 
*/
float valorPagamento(float valorPrestacao, int diasAtraso){

    if( diasAtraso > 0 )
    {
        float juro = (0.001 * diasAtraso) * valorPrestacao;
        float multa = 0.03 * valorPrestacao;
        valorPrestacao = valorPrestacao + juro + multa;
        return valorPrestacao;
    }
    else if( diasAtraso == 0)
    {
        return valorPrestacao;
    }
    else
    {
        return -1; 
    }
    
}