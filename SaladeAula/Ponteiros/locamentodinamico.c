#include <stdio.h>
#include <stdlib.h>

void dobra(int *x){
    *x = *x * 2;
}

int main()
{
    int i = 20;
    //int *p = malloc(4); //Valor de bytes de um inteiro
    int *p = malloc(sizeof *p);

    *p = 50;
    
    
    /*printf("%d\n", i);
    dobra(&i);
    printf("%d\n", i);*/

    printf("%d\n", *p);
    dobra(p); //Endereço onde foi salvo o malloc
    printf("%d\n", *p);


    return 0;
}