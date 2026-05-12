#include <stdio.h>
int main()
{
 int a,b,sum,rest,mult;
 printf("Ingrese dos números separadas por coma:\n");
 scanf("%d, %d, %d", &a, &b);
 do 
   {
   sum=a+b;
   rest=a-b;
   mult=a*b;
   } 
 printf("%d, %d, %d", sum, rest, mult);
return 0;
}
