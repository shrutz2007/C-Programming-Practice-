/* x^n program*/

#include<stdio.h>
void
main ()
{
  int y = 1, x, n, i = 1;
  printf ("Enter the value of x and n : ");
  scanf ("%d%d", &x, &n);
  for (i = 1; i <= n; i++)
    {
      y = y * x;

    }
  printf ("\n%d", y);
}
