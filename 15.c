#include <stdio.h>
int main()
{
int N, i, pos, neg, nul;
  printf("Ingrese el tamaño del arreglo unidimensional:\n");
scanf("%d", &N);
  int mat[N];
  for (i=0;i<N;i++)
    {
    printf("Ingrese el valor entero %d del arreglo:", i+1);
    scanf("%d", &mat[i]);
    }
  for (i=0;i<N;i++) 
    {
    if (mat[i] > 0) 
  {
  pos++;
  } 
  else 
    {
  if (mat[i] < 0) 
  {
  neg++;
  }
  else 
  {
  nul++;
  }
    } 
  printf("El arreglo tiene %d positivos, %d negativos y %d nulos (iguales a cero).", pos, neg, nul);
} 
