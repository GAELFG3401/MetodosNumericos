#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    int *resultados = (int *) malloc(sizeof(int) * 10);


    for (int i = 0; i < 10; i++) {
        resultados[i] = n * (i+1);
    }

    printf("Tabla de multiplicar de %d:\n", n);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", n, i+1, resultados[i]);
    }

    free(resultados);

    return 0;
}