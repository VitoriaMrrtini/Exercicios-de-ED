#include <stdio.h>

void analiseVetor(int v[], int tamanho, int *maior, int *menor, float *media)
{
    float soma = 0;
    *menor = *(v + 0);
    *maior = *(v + 0);
    for (int i = 0; i < tamanho; i++)
    {
        if (*maior < *(v + i))
        {
            *maior = *(v + i);
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (*menor > *(v + i))
        {
            *menor = *(v + i);
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        soma += *(v + i);
    }
    *media = (float)soma / tamanho;
}

int main()
{
    int v[4] = {4, 1, 3, 2}, maior, menor;
    float media;

    analiseVetor(v, 4, &maior, &menor, &media);
    printf("Maior: %d\nMenor: %d\nMédia: %.2f\n", maior, menor, media);

}