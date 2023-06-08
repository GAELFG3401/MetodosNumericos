#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float triangulo(float a, float b, float c);

int main(){
    float a, b, c, area;
    printf("Escribe el lado a: ");
    scanf("%f", &a);
    printf("Escribe el lado b: ");
    scanf("%f", &b);
    printf("Escribe el lado c: ");
    scanf("%f", &c);
    area = triangulo(a, b, c);
    printf("Area: %f", area);
    return 0;
}

float triangulo(float a, float b, float c){
   float area, p;
   p = (a + b + c)/2;
   area = sqrt(p*(p-a)*(p-b)*(p-c));
   return area;
}