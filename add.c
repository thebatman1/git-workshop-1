#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int a = 30;
    int b = 20;
    printf("%d\n", add(a, b));
}
