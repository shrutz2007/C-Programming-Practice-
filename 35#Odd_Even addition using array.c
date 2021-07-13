/*Odd and Even addition using Array*/

#include<stdio.h>
void
main ()
{
  int i, a[100], n, e = 0, o = 0;
  printf ("Enter the value of n : ");
  scanf ("%d", &n);
  printf ("\nEnter the array element : ");
  for (i = 1; i <= n; i++)
    {
      scanf ("%d", &a[i]);
    }

  for (i = 1; i <= n; i++)
    {
      printf ("\nEntered elements are : %d", a[i]);
      if (a[i] % 2 == 0)
	{
	  printf ("\n Even", a[i]);
	  e = e + a[i];
	}
      else
	{
	  printf ("\n odd", a[i]);
	  o = o + a[i];
	}
    }
  printf ("\n Addition of Even : %d  and Addition of odd : %d", e, o);
}
