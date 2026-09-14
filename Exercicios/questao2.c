#include <stdio.h>

void quadrado(int n, int *saida)
{
    int s = n * n;
    *saida = s;
}

int main()
{
    int x = 5;
    int r;

    quadrado(x, &r);
    printf("%d\n", r);

    // r deve ser 25

    return 0;
}