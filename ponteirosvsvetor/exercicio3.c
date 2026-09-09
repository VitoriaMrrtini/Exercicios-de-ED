#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    int *v[4] = {&a, &b, &c, &d};
    //v[0] = &a;
    int **p = v;

    return 0;
}