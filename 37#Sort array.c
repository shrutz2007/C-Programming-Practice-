/*Arrange array in ascending order*/

#include<stdio.h>
void
main ()
{
  int i, j, t = 0, n, a[100];
  printf ("Enter the value of n : ");
  scanf ("%d", &n);
  printf ("Enter the array elements : ");
  for (i = 1; i <= n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = 1; i <= n; i++)
    {
      printf ("%d", a[i]);
    }
  for (i = 1; i <= (n - 1); i++)
    {
      for (j = i + 1; j <= n; j++)
	{
	  if (a[i] > a[j])
	    {
	      t = a[i];
	      a[i] = a[j];
	      a[j] = t;
	    }
	}
    }
  printf ("\n Sorted array : ");
  for (i = 0; i <= n; i++)
    {
      printf ("\t %d", a[i]);
    }
}
