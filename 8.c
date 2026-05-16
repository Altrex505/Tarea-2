#include <stdio.h>
int main()
{
int a, b;
printf("Ingrese dos número enteros separados por espacio:\n");
scanf("%d %d", &a, &b);
if (b == 0) 
{
printf("No se puede dividir entre cero.\n");
} 
if (a % b == 0)
{
printf("%d es divisor de %d.", b, a);
}
else
{
printf("%d no es divisor de %d.", b, a);
}
} 
