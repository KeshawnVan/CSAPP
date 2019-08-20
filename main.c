#include <stdio.h>


void swap(int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int x = 1;
    int y;
    int *px = &x;
    *px = 2;
    printf("x : %d \n", x);
    y = ++*px;
    printf("x : %d \n", x);
    printf("y : %d \n", y);
    int z = 100;
    printf("before swap x : %d, z: %d \n", x, z);
    swap(&x, &z);
    printf("after swap x : %d, z: %d \n", x, z);
}
