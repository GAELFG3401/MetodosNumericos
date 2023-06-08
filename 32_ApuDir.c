#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i[10], x;
float f[10];

int main(){

    printf("\t\tEntero\t\t\tFlotante\n\n");

    for(x=0; x<10; x++){
        printf("Elemento %d:\t%d\t\t%d\n", x, &i[x], &f[x]);
    }
    return 0;
}