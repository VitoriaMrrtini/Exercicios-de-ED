#include <stdio.h>

void altera(int *x)
{
    *x = *x + 10;
}

int main()
{
    int a = 5;
    altera(&a);

    printf("%d\n", a);

    return 0;

    /*
    a) O valor final de a é 15.
    b) A função altera faz uma soma com no endereço de a usando os ponteiros dentro do parâmentro da função.
    */
}