#include <stdio.h>
int main()
{
int N,i;
printf("Ingrese un número entero mayor o igual a 1:\n");
scanf("%d", &N);
do
  {
if (N >= 1)
{
for(i = 1; i <= 10; i++) 
{
printf("%d x %d = %d\n", n, i, n * i);
} 
} 
else
{
printf("Número no válido, ingrese otro:\n");
scanf("%d", &N);
}
  } 
while (N < 1);
} 
