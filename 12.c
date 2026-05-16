#include <stdio.h>
int main()
{
int N, i, p=1;
printf("Ingrese el número de naturales: \n");
scanf("%d", &N);
if(N>=1)
{
for(i=2;i<=N;i++)
  {
p=p*i;
  } 
}
  else
{
p=0;
}
  printf("El producto de los primeros %d naturales es %d.",N,p);
} 
