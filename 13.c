#include <stdio.h>
int main()
{
int mat[N], N, i, s=0;
  printf("Ingrese el tamaño del arreglo unidimensional:\n");
scanf("%d", &N);
  for (i=0;i<N;i++)
    {
    printf("Ingrese el valor entero %d del arreglo:", i+1);
    scanf("%d", &mat[i]);
    s=s+mat[i];
    }
  printf("la suma de los elementos del arreglo es %d", s);
} 
