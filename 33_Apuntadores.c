#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,n;
    char*buffer;

    printf("Teclea la longitud de la cadena: ");
    scanf("%d",&x);

    buffer = (char*)malloc((x+1)*sizeof(char));
    if(buffer == NULL)exit(1);

    for(n=0;n<x;n++){
        scanf("%s",&buffer[n]);
    }
    buffer[x]='\0';

    printf("Cadena: %s\n",buffer);
    free(buffer);
    printf("\n");
    return 0;
}