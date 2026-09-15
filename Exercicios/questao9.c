#include <stdio.h>

void menorValor(int v[], int tamanho, int *valor, int *posicao)
{
    *valor = *(v + 0);
    *posicao = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (*valor > *(v + i))
        {
            *valor = *(v + i);
            *posicao = i;
        }
    }
}

int main()
{
    int v[4] = {4, 1, 3, 2};
    int r, p;

    menorValor(v, 4, &r, &p);
    printf("Resultado: %d\nPosição:%d\n", r, p);

    // r = 10
}