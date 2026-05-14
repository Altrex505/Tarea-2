#include <stdio.h>
int main()
{
float r, circ = 0, A = 0;
printf("Ingrese el radio:\n");
scanf("%f", &r);
circ = 2 * 3.14 * r;
A = 3.14 * r * r;
printf("circunferencia = %f, Área = %f", circ, A);
} 
