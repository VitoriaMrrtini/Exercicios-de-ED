#include <stdio.h>

void soma(int a, int b, int *saida)
{
    int s = a + b;
    *saida = s;
}

int main()
{
    int x = 4;
    int y = 6;
    int resultado;

    soma(x, y, resultado);

    printf("%d\n", resultado);

    return 0;

    /*a) O valor do resultado será 10
    b) O resultado não pode ser exibido,
    pois o endereço na declaração de parâmetro não possui um endereço válido na hora de ter um resultado,
    então a função não sabe para qual endereço mandar a saida*/
}