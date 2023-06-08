#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 1;
    int cuadrado, cubo;
    while (contador<500)
    {
        cuadrado = contador * contador;
        cubo = contador * contador * contador;
        printf("%d, %d, %d, \n", contador, cuadrado, cubo);
        contador++;
    }
    printf("Fin");
    system("Pause");
    return 0;
}