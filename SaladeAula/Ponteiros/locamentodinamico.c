#include <stdio.h>
#include <stdlib.h>

void dobra(int *x){
    *x = *x * 2;
}

int main()
{
    int i = 20;
    int *p = malloc(4);
    //int *p = malloc(sizeof *p);

    *p = 50;

    printf("%d", *p);

    
    
    printf("%d", i);
    dobra(&i);
    printf("%d", i);

    return 0;
}