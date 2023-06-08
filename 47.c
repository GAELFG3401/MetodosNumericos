#include <stdio.h>

int factorial(int n);

int main(void) {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("El factorial de %d es: %d\n", n, result);
    system("pause");
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
