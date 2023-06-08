#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    char* arreglo = (char*)malloc(sizeof(char) * x);
    printf("Ingrese %d elementos para llenar el arreglo:\n", x);
    for (int i = 0; i < x; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf(" %c", arreglo + i);
    }
    printf("Arreglo inverso:\n");
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *(arreglo + i));
    }
    printf("\n");
    free(arreglo);

    return 0;
}
