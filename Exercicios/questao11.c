#include <stdio.h>

void dobraVetor(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(v + i) *= 2;
    }
}

int main()
{
    int v[4] = {4, 1, 3, 2};

    dobraVetor(v, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("Resultado: %d\n", v[i]);
    }
    
}