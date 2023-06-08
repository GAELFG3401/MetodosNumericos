#include <stdio.h>
int main() {
    int i = 1;
    printf("Número, Cuadrado, Cubo\n");
    while (i <= 500) {
        int cuadrado = i * i;
        int cubo = i * i * i;
        printf("%d, %d, %d\n", i, cuadrado, cubo);
        i++;
    }
    return 0;
}