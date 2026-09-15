#include <stdio.h>

void mediaVetor(int v[], int tamanho, float* media)
{
    float soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += *(v + i);
    }
    *media = (float) soma / tamanho;
}

int main()
{
    int v[4] = {4, 1, 3, 2};
    float r;

    mediaVetor(v, 4, &r);
    printf("Resultado: %.2f\n", r);

    // r = 10
}