#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;   

    for (*p_a = 1; *p_a <= 10; (*p_a)++) {
        for (*p_b = 1; *p_b <= 10; (*p_b)++) {
            *p_c = (*p_a) * (*p_b);
            printf("%d \t", *p_c);
        }
        printf("\n");
    }
    return 0;
}