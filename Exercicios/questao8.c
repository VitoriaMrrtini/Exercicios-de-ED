#include <stdio.h>

void maiorValor(int v[], int tamanho, int *resultado)
{
    *resultado = *(v + 0);
    for (int i = 0; i < tamanho; i++)
    {
        if (*resultado < *(v + i))
        {
            *resultado = *(v + i);
        }
    }
}

int main()
{
    int v[4] = {1, 5, 3, 4};
    int r;

    maiorValor(v, 4, &r);
    printf("Resultado: %d\n", r);

}