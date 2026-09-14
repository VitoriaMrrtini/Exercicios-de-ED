#include <stdio.h>

void compara(int a, int b, int *saidaMaior, int *saidaMenor)
{
    if (a > b)
    {
        *saidaMaior = a;
        *saidaMenor = b;
    }
    else
    {
        *saidaMaior = b;
        *saidaMenor = a;
    }
}
int main()
{
    int x = 10, y = 20, maior, menor;
    compara(x, y, &maior, &menor);

    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}