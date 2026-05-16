#include <stdio.h>
int main()
{
float d, t, p;
printf("Ingresa la distancia de ida en km y el tiempo de estancia en días en ese orden y sepeardos por coma:\n");
scanf("%f, %f", &d, &t);
if (d * 2 > 800 && t > 7) 
 {
 p = d * 2 * 0.7 * 0.23;
 }
else
 {
 p = d * 2 * 0.23;
 }
printf("el precio del ticket es %f", p);
} 
