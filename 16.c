#include <stdio.h>
int main()
{
int i, N=2;
int mat[100];
for (i=0;i<100;i++)
  {
    mat[i]=N;
    N=N+2;
  }
for (i=0;i<100;i++)
  {
    printf("%d\n", mat[i]);
  }
}
