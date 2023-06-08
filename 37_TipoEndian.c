#include <stdio.h>
#include <arpa/inet.h>

int main() {
    unsigned int x = 0x12345678;
    unsigned char *p = (unsigned char *) &x;
    
    if (htonl(0) == 1) {
        printf("El host es big endian.\n");
    } else {
        printf("El host es little endian.\n");
    }
    return 0;
}