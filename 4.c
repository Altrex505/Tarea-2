#include <stdio.h>
int main()
{
float inv, tasa, total = 0;
printf("Ingrese la cantidad de dinero a depositar:\n");
scanf("%f", &inv);
printf("Ingrese el porcentaje de la tasa de interés mensual del banco:\n"); 
scanf("%f", &tasa);
total = inv + inv * (tasa / 100);
printf("El total a fin de mes será %f", total);
} 
