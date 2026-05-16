#include <stdio.h>
int main()
{
int N, i, pos=0, neg=0, nul=0;
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
  pos=pos+1;
  } 
  else 
    {
  if (mat[i] < 0) 
  {
  neg=neg+1;
  }
  else 
  {
  nul=nul+1;
  }
    } 
    } 
  printf("El arreglo tiene %d positivos, %d negativos y %d nulos (iguales a cero).", pos, neg, nul);
} 
