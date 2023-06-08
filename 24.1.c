#include <stdio.h>
#include <stdlib.h>

int main(){
    int con1 =0;
    int con2 = 0;
    int con3 = 0;
    int di3, di2, di7;
    int a = 3;
    printf("Divisibles entre 3\n");
    while (con1 < 1000)
    {
        di3 = con1%a;
        if (di3 == 0)
        {
            printf("%d, ", con1);
        }
        con1++;
    }
    printf("\nDivisibles entre 2 y 7\n");
    while (con2 < 1000)
    {
        di2 = con2%2;
        di7 = con2%7;

        if (di2 == 0)
        {
            if (di7 == 0)
            {
                printf("%d, ", con2);
            }
            
        }
        con2++;
    }
    printf("\nOmirtiendo divisbles 7\n");
    while (con3 < 100)
    {
        di7 = con3%7;
        if (di7 != 0)
        {
            printf("%d, ", con3);
        }
        con3++;
    }
    
    printf("\n");
    printf ("Fin");
    return 0;
}