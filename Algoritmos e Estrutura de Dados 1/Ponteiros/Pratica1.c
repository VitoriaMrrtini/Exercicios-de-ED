#include <stdio.h>

int main(){
    int i = 200;
    int v[4] = {10, 20, 30, 40};
    int *pi = &i;
    int *x = &v[2];
    // int *v = v + 2;
    int *p = v; 
    // int *p = &v[0];

    return 0;
}