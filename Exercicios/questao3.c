#include <stdio.h>

void calcula(int a, int b, int *soma, int *diferenca)
{
    int s = a + b;
    int d = a - b;

    *soma = s;
    *diferenca = d;
}

int main()
{
    int x = 10;
    int y = 13;
    int soma, diferenca;

    calcula(x, y, &soma, &diferenca);
    printf("%d\n%d\n", soma, diferenca);

    return 0;
}