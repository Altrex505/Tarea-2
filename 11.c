#include <stdio.h>
int main()
{
  int s=0, i;
for (i=12;i<50;i++) 
  {
  if (i % 2 == 0) 
  {
  s=s+i;
  } 
  } 
  printf("la suma de pares entre el 10 y 50 es %d", s);
} 
