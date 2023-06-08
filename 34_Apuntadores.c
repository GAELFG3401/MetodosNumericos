#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int *buffer, *p_buffer;

    printf("Teclea la longuitud del arreglo: ");
    scanf("%d", &n);

    buffer = (int *)malloc((n) * sizeof(int));
    if (buffer == NULL)
        exit(1);

    p_buffer = buffer;
    for (i = 0; i < n; i++)
    {
        printf("Ingresa el valor %d: ", i);
        scanf("%d", p_buffer++);
    }

    printf("\n");

    p_buffer = buffer;
    printf("Los valores del arreglo son: \n");
    for (n = 0; n < i; n++)
    {
        printf("arreglo[%d] = %d\n", n, *p_buffer++);
    }

    free(buffer);

    printf("\n");
    return 0;
}