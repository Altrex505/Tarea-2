#include <stdio.h>
int main()
{
float m, total;
printf("Ingresa el monto:\n");
scanf("%f", &m);
if (m > 2500) 
{
  total = m - m * 0.08;
} 
else
{
  total = m;
} 
printf("el total a pagar es %f", total); 
} 
