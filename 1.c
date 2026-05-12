#include <stdio.h>
int main()
{
 int a,b,sum = 0,rest = 0,mult = 0;
 printf("Ingrese dos números separadas por coma:\n");
 scanf("%d, %d, %d", &a, &b);
 sum = a + b;
 rest = a - b;
 mult = a * b;
 printf("%d, %d, %d", sum, rest, mult);
}
