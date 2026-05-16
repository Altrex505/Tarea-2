#include <stdio.h>
int main()
{
int i, N, pos= 0, neg = 0, nul = 0;
for (i = 1; i <= 100; i++) 
{
  printf("Ingresa el numero %d: ", i);
  scanf("%d", &N);

  if (N > 0) 
  {
  pos++;
  } 
  else 
  {
  if (N < 0) 
  {
  neg++;
  }
  else 
  {
  nul++;
  }
  } 
} 
    printf("Numeros positivos: %d\n", pos);
    printf("Numeros negativos: %d\n", neg);
    printf("Numeros nulos (ceros): %d\n", nul);
} 
