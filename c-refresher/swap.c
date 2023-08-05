#include <stdio.h>

void swap(int *pa, int * pb) {
    int temp = *pb;
    *pb = *pa;
    *pa = temp;
    return;
}

int main(){
    int a = 37;
    int b = 99;
    swap(&a, &b);
    printf("%d,%d\n", a, b);
    // and should produce the output shown at right
}