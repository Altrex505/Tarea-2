#include <stdio.h>
int main()
{
int N,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10;
printf("Ingrese un número entero mayor o igual a 1:\n");
scanf("%d", &N);
do
  {
if (N >= 1)
{
  N1 = N * 1;
  N2 = N * 2;
  N3 = N * 3;
  N4 = N * 4;
  N5 = N * 5;
  N6 = N * 6;
  N7 = N * 7;
  N8 = N * 8;
  N9 = N * 9;
  N10 = N * 10;
printf("%d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d \n %d", N1, N2, N3, N4, N5, N6, N7, N8, N9, N10);
}
else
{
printf("Número no válido, ingrese otro:\n");
scanf("%d", &N);
}
  } 
while (N < 1);
} 
