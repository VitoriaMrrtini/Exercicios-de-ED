#include <stdio.h>
#include <stdlib.h>

void printVetor(int *v, int tamanho)
{
    printf("[]");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", v[i]);
        printf(",");
    }
    printf("]\n");
}

int main()
{
    int v1[3] = {1, 2, 3};
    //int *v2[] = malloc(3 * sizeof *v2);
    int *v2[] = calloc(3, sizeof *v2);
    v2[0] = 10;
    v2[1] = 20;
    v2[2] = 30;

    printVetor(v1, 3); // [1,2,3] retorna o endereço do vetor
    printVetor(v2, 3); // [10,20,30] Aponta para heap e imprime seu endereço

    free(v2);
    v2 = NULL;
}