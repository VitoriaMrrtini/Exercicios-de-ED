#include <stdio.h>

void maiorValor(int v[], int tamanho, int *resultado)
{
    int valorAnterior = v;
    for (int i = 0; i < tamanho; i++)
    {
        if (valorAnterior < *(v + i))
        {
            *resultado = *(v + i);
        }
    }
}

int main()
{
    int v[4] = {1, 2, 3, 4};
    int r;

    somaVetor(v, 4, &r);
    printf("Resultado: %d\n", r);

    // r = 10
}