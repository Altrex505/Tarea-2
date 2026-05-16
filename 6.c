#include <stdio.h>
int main()
{
float s, sa;
printf("Ingrese el sueldo:\n");
scanf("%f", s);
if(s < 1000)
{
  sa = s * 1.15;
} 
else
{
  sa = s * 1.12;
} 
printf("el sueldo con aumento es %f", sa);
} 
