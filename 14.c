#include <stdio.h>
int main()
{
int N, i, n, s=0;
  printf("Ingrese el tamaño del arreglo unidimensional:\n");
scanf("%d", &N);
  int mat[N];
  for (i=0;i<N;i++)
    {
    printf("Ingrese el valor entero %d del arreglo:", i+1);
    scanf("%d", &mat[i]);
    }
  printf("Ingrese un número para buscar en el arreglo: ");
    scanf("%d", &n);
  for (i=0;i<N;i++) 
    {
    if (mat[i]==N) 
    {
    s=s+1
    } 
    } 
  printf("El número dado se repite %d veces en el arreglo.", s);
} 
