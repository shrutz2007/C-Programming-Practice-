/*Reverse the array*/
#include<stdio.h>
void
main ()
{
  int i = 0, n = 0, a[100];
  printf ("Enter value of n : ");
  scanf ("%d", &n);
  printf ("Enter the array elements : ");
  for (i = 1; i <= n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = n; i >= 0; i--)
    {
      printf ("%d", a[i]);
    }
}
