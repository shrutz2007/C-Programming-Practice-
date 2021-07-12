/* Array input and output program*/

#include<stdio.h>
void
main ()
{
  int i, a[10], n;
  printf ("Enter the value of n : ");
  scanf ("%d", &n);
  printf ("Enter the value of array element : ");
  for (i = 1; i <= n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = 1; i <= n; i++)
    {
      printf ("%d", a[i]);
    }
}
