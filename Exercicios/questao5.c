#include <stdio.h>

int soma(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

int psoma(int a, int b, int *saida)
{
    int s = a + b;
    *saida = s;
}

int main()
{
    int x = 10;
    int y = 13;
    int resultado;

    psoma(x, y, &resultado);

    printf("%d\n", soma(x, y));/*Essa função precisa criar um return para imprimir a resposta.*/
    printf("%d\n", resultado); /*Essa função não precisa de um return para salvar o resultado, assim eu posso usar essa variável sem usar um return.*/

    return 0;
}